create table crafte_materials (
  id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
  weapon_id INT NOT NULL,
  material_id INT NOT NULL,
  count INT NOT NULL DEFAULT 1,
  CONSTRAINT fk_weapon_id
    FOREIGN KEY fk_weapon_id(weapon_id)
    REFERENCES weapons (id)
    ON DELETE RESTRICT ON UPDATE CASCADE,
  CONSTRAINT fk_material_id
    FOREIGN KEY fk_material_id(material_id)
    REFERENCES materials (id)
    ON DELETE RESTRICT ON UPDATE CASCADE
);
