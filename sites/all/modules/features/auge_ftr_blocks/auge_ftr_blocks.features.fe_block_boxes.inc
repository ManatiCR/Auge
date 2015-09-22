<?php
/**
 * @file
 * auge_ftr_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function auge_ftr_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blog title text';
  $fe_block_boxes->format = 'manati_texto_formato';
  $fe_block_boxes->machine_name = 'block_blog_title_information';
  $fe_block_boxes->body = '<h1>Blog</h1><p>Useful and practical&nbsp;information aobut what we do, learn, and achieve.</p>';

  $export['block_blog_title_information'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact information block';
  $fe_block_boxes->format = 'manati_texto_formato';
  $fe_block_boxes->machine_name = 'block_contact';
  $fe_block_boxes->body = '<p><b>​Campus Rodrigo Facio, UCR.</b></p><p>"Casa emprendedora María Teresa Obregón", 100 meters east and 100 north from the "Fuente de la Hispanidad", San Pedro, San José.</p><p><strong>Phone:</strong></p><p>+506 2511-1334</p><p><strong>Contact:</strong></p><p>luisalonso@augeucr.com</p>';

  $export['block_contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact information block (spanish)';
  $fe_block_boxes->format = 'manati_texto_formato';
  $fe_block_boxes->machine_name = 'block_contacto';
  $fe_block_boxes->body = '<p><strong>SEDE CENTRAL UCR</strong></p><p>Casa emprendedora María Teresa Obregón, 100 metros este y 100 norte de la Fuente de la Hispanidad, San Pedro, San José.</p><p><strong>Teléfono:</strong></p><p>+506 2511-1334</p><p><strong>Contacto principal:</strong></p><p>luisalonso@augeucr.com</p>';

  $export['block_contacto'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Who we are title and text';
  $fe_block_boxes->format = 'manati_texto_formato';
  $fe_block_boxes->machine_name = 'whoweare_title';
  $fe_block_boxes->body = '<p>Who we are</p><p>Bacon ipsum dolor amet swine frankfurter sirloin, pork chop chuck prosciutto bacon. Tenderloin strip steak shank chuck swine boudin prosciutto. Brisket t-bone tenderloin venison ham turducken. Tenderloin frankfurter kevin, filet mignon pancetta pork belly ribeye picanha meatball rump bresaola beef ribs ham landjaeger. Beef picanha alcatra bacon ham hock. Landjaeger bresaola spare ribs, pork chop swine rump ham bacon strip steak ground round biltong tail jerky. Shank jowl cow, tail porchetta meatloaf venison kielbasa corned beef ham hock cupim.</p><p>Spare ribs jerky shoulder salami tenderloin beef pork shank. Porchetta short ribs meatloaf chicken capicola ribeye pork chop strip steak boudin sirloin ball tip spare ribs shank prosciutto chuck. Chuck corned beef tail pork chop ham frankfurter prosciutto capicola. Boudin spare ribs pork chop short loin jowl t-bone meatloaf tail bresaola hamburger.</p><p>Doner leberkas tri-tip, pork chop strip steak t-bone alcatra short ribs pork tongue chuck pig salami turducken. Filet mignon cupim venison sausage turducken kielbasa meatloaf tongue pastrami. Sausage prosciutto turducken shankle doner, chuck salami beef meatball. Kevin meatloaf sirloin pastrami. Capicola tri-tip short loin bacon alcatra ball tip pork belly jerky tongue kielbasa. Sirloin kevin filet mignon capicola ground round turkey ball tip chicken picanha landjaeger tenderloin cow turducken.</p>';

  $export['whoweare_title'] = $fe_block_boxes;

  return $export;
}
