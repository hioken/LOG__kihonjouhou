create table sharpnesses (
  id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
  weapon_id INT NOT NULL,
  sharpness_orange INT NOT NULL,
  sharpness_ INT NOT NULL DEFAULT 0,
  sharpness_ INT NOT NULL DEFAULT 0,
  sharpness_ INT NOT NULL DEFAULT 0,
  sharpness_ INT NOT NULL DEFAULT 0,
  sharpness_ INT NOT NULL DEFAULT 0,
  CONSTRAINT fk_weapon_id
    FOREIGN KEY fk_weapon_id(weapon_id)
    REFERENCES weapons (id)
    ON DELETE RESTRICT ON UPDATE CASCADE
);
