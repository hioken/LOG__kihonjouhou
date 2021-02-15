insert
  into book_infomations
  values
    (1, 'book_1'),
    (2, 'book_2'),
    (3, 'book_3'),
    (4, 'book_4')
;


insert
  into rentals
  values
    (1, 1, '2021-01-01', '2021-01-02'),
    (2, 1, '2021-01-01', null)
;

select distinct
  book_infomation_id,
  case
    when returning is null then 'can`t'
    when returning is not null then 'can'
    else 'a'
  end as rental_status
from rentals
  where
    book_infomation_id = 1
    and lending = (select max(lending) from rentals where book_infomation_id = 1)
union all
select distinct
  id,
  'can' as rental_status
from book_infomations
  where
    id = 1
    and not exists (select book_infomation_id from rentals where book_infomation_id = 1)
;

insert
  into rentals
  values
    (1, 1, '2021-01-01', '2021-01-02'),
    (2, 1, '2021-01-01', null)
;

select distinct
  book_infomation_id,
from rentals
;

create view rentaring(name, lending)
  as select book_infomations.name, rentals.lending
  from book_infomations, rentals
  where book_infomations.id = rentals.book_infomation_id
;
