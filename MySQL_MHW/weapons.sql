create table weapons (
  id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
  weapon_type ENUM('Great Sword', 'Sword & Shield', 'Dual Vlades', 'Long Sword', 'Hammer', 'Hunting Horn', 'Lance', 'GunLance', 'Switch Axe', 'Charge Blade', 'Insect Glaive', 'Bow', 'Light Bowgun', 'Heavy Bowgun') NOT NULL,
  name VARCHAR(50) NOT NULL UNIQUE,
  rarity INT NOT NULL,
  attack_power INT NOT NULL,
  arrinity FLOAT(4,3) NOT NULL DEFAULT 0,
  element_type ENUM('none' , 'fire', 'water', 'ice', 'thunder', 'dragon', 'poison', 'paralysis', 'sleep', 'blast') NOT NULL DEFAULT 0,
  element_damege INT,
  defense INT,
  decoration_slot_1 INT NOT NULL DEFAULT 0,
  decoration_slot_2 INT NOT NULL DEFAULT 0,
  decoration_slot_3 INT NOT NULL DEFAULT 0,
  grade INT
);
