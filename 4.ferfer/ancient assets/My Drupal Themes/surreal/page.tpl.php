<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language; ?>" xml:lang="<?php print $language; ?>">

<head>
	<title><?php print $head_title; ?></title>
	<?php print $head; ?>
	<?php print $styles; ?>
	<?php print $scripts; ?>
</head>

<body>
	<div id="container">
		<div id="header">header title</div>

		<?php if (isset($primary_links)) { ?>
		<?php print theme('links', $primary_links, array('class' =>'navcontainer', 'id' => 'navlist')) ?>
		<?php } ?>

		<div id="wrapper">
			<?php if ($sidebar_left) { ?>
			<div id="left">
				<?php print $sidebar_left; ?>
			</div>
			<?php } ?>

			<?php if ($sidebar_right) { ?>
			<div id="right">
				<?php print $sidebar_right; ?>
			</div>
			<?php } ?>

			<div id="content">
				<?php print $messages; ?>
				<?php print $help; ?>
				<div class="tabs"><?php print $tabs; ?></div>
				<?php print $content; ?>
			</div>
		</div>

		<div id="footer">
			<?php print $footer_message; ?>
		</div>
	</div>
	<?php print $closure;?>
</body>
</html>
