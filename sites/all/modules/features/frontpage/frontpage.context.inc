<?php
/**
 * @file
 * frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'Frontpage context';
  $context->tag = 'frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'drupalfi_footer_block-drupalfi_footer_block' => array(
          'module' => 'drupalfi_footer_block',
          'delta' => 'drupalfi_footer_block',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage context');
  t('frontpage');
  $export['frontpage'] = $context;

  return $export;
}
