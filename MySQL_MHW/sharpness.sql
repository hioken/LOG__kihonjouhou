create table sharpnesses (
  id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
  sharpness_orange INT NOT NULL,
  sharpness_yellow INT NOT NULL DEFAULT 0,
  sharpness_green INT NOT NULL DEFAULT 0,
  sharpness_bule INT NOT NULL DEFAULT 0,
  sharpness_white INT NOT NULL DEFAULT 0,
  sharpness_purple INT NOT NULL DEFAULT 0,
  CONSTRAINT fk_weapon_id
    FOREIGN KEY fk_weapon_id(weapon_id)
    REFERENCES weapons (id)
    ON DELETE RESTRICT ON UPDATE CASCADE
);
