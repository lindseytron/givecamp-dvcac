<?php

/**
 * @file
 * Strip out width and height from image tag in slideshow banner view.
 */
?>

<?php
  $img_tag = $field->original_value;
  $new_tag = preg_replace('/width="[^"]*"/', '', $img_tag);
  $new_tag = preg_replace('/height="[^"]*"/', '', $new_tag);
  print $new_tag;
?>
