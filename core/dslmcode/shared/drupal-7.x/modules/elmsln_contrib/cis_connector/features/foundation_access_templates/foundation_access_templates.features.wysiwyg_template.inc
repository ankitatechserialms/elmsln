<?php
/**
 * @file
 * foundation_access_templates.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function foundation_access_templates_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['image'] = array(
    'title' => 'Image',
    'description' => 'This is an inline image that can be used in any rich text area.',
    'weight' => 5,
    'fid' => 7,
    'body' => '<p>Lorem ipsum Adipisicing laborum sint mollit qui irure eiusmod aute ad proident aliqua amet dolor dolore culpa est amet cillum ex aute cupidatat officia ullamco culpa sunt velit ullamco labore Duis magna id dolor qui tempor ea dolore in commodo velit nostrud ex laboris nulla nisi aliquip ut elit Duis Duis laborum irure sit reprehenderit consequat ut ut pariatur non dolor in sint dolor labore et laborum nisi fugiat dolor cupidatat aute reprehenderit sed fugiat dolor ex eu deserunt irure sed qui elit aliquip sint aliqua et amet enim aliquip enim do elit dolor elit incididunt sed pariatur eu dolore qui consequat amet minim irure Excepteur dolore anim anim laborum dolor quis nulla officia non eiusmod non tempor culpa id voluptate consequat nostrud dolor Excepteur veniam esse laboris eu Ut consectetur dolor aute magna est ex nulla nisi non cupidatat aliqua amet irure dolore Duis amet ad anim pariatur occaecat exercitation officia ullamco eu nulla commodo et est incididunt mollit pariatur exercitation veniam eu labore fugiat cupidatat nostrud deserunt eu.</p><figure class="image"><img alt="This is the images alt info." class="image__img" src="https://unsplash.it/1200/600" /> <cite class="image__cite">Here is the citation or photo credit for the image.</cite><figcaption class="image__caption"><p>This is the caption for the image.</p></figcaption></figure><p>Lorem ipsum Minim do adipisicing veniam consectetur fugiat aliqua eu quis esse irure tempor est eu ex officia minim reprehenderit in laborum cillum pariatur consequat quis culpa in amet Excepteur in sit laborum exercitation Ut laboris labore est aliquip nulla do quis eu est labore quis aliqua ea sint ea pariatur non Excepteur mollit id mollit Excepteur veniam do anim irure elit sint officia adipisicing dolore reprehenderit elit cillum ad amet tempor veniam id ut consequat quis do proident ut nostrud dolor sunt magna non qui dolore eiusmod ullamco exercitation ex eiusmod dolore Duis anim mollit anim esse mollit quis officia adipisicing dolore mollit ad commodo occaecat sed in ut elit minim Duis nostrud in elit id consequat Excepteur ex aliquip est sint dolore eiusmod in dolore consequat Ut proident consectetur ut dolore laborum tempor magna magna dolor ex quis veniam aliquip dolore enim non minim laboris quis amet quis dolore anim irure ad Excepteur Excepteur consectetur do sed deserunt occaecat qui eu anim veniam dolore ex aute consequat veniam qui nulla nisi eiusmod velit ad ut quis esse Ut officia irure enim exercitation aute non culpa Duis consequat magna cupidatat minim minim elit laboris.</p>',
    'format' => 'textbook_editor',
    'name' => 'image',
    'content_types' => array(),
  );
  $templates['image_boxed'] = array(
    'title' => 'Image Boxed',
    'description' => '',
    'weight' => 8,
    'fid' => 10,
    'body' => '<p>Lorem ipsum Adipisicing laborum sint mollit qui irure eiusmod aute ad proident aliqua amet dolor dolore culpa est amet cillum ex aute cupidatat officia ullamco culpa sunt velit ullamco labore Duis magna id dolor qui tempor ea dolore in commodo velit nostrud ex laboris nulla nisi aliquip ut elit Duis Duis laborum irure sit reprehenderit consequat ut ut pariatur non dolor in sint dolor labore et laborum nisi fugiat dolor cupidatat aute reprehenderit sed fugiat dolor ex eu deserunt irure sed qui elit aliquip sint aliqua et amet enim aliquip enim do elit dolor elit incididunt sed pariatur eu dolore qui consequat amet minim irure Excepteur dolore anim anim laborum dolor quis nulla officia non eiusmod non tempor culpa id voluptate consequat nostrud dolor Excepteur veniam esse laboris eu Ut consectetur dolor aute magna est ex nulla nisi non cupidatat aliqua amet irure dolore Duis amet ad anim pariatur occaecat exercitation officia ullamco eu nulla commodo et est incididunt mollit pariatur exercitation veniam eu labore fugiat cupidatat nostrud deserunt eu.</p><figure class="image image--boxed"><img alt="This is the images alt info." class="image__img" src="https://unsplash.it/1200/800/" /> <cite class="image__cite">Here is the citation or photo credit for the image.</cite><figcaption class="image__caption"><p>This is the caption for the image.</p></figcaption></figure><p>Lorem ipsum Minim do adipisicing veniam consectetur fugiat aliqua eu quis esse irure tempor est eu ex officia minim reprehenderit in laborum cillum pariatur consequat quis culpa in amet Excepteur in sit laborum exercitation Ut laboris labore est aliquip nulla do quis eu est labore quis aliqua ea sint ea pariatur non Excepteur mollit id mollit Excepteur veniam do anim irure elit sint officia adipisicing dolore reprehenderit elit cillum ad amet tempor veniam id ut consequat quis do proident ut nostrud dolor sunt magna non qui dolore eiusmod ullamco exercitation ex eiusmod dolore Duis anim mollit anim esse mollit quis officia adipisicing dolore mollit ad commodo occaecat sed in ut elit minim Duis nostrud in elit id consequat Excepteur ex aliquip est sint dolore eiusmod in dolore consequat Ut proident consectetur ut dolore laborum tempor magna magna dolor ex quis veniam aliquip dolore enim non minim laboris quis amet quis dolore anim irure ad Excepteur Excepteur consectetur do sed deserunt occaecat qui eu anim veniam dolore ex aute consequat veniam qui nulla nisi eiusmod velit ad ut quis esse Ut officia irure enim exercitation aute non culpa Duis consequat magna cupidatat minim minim elit laboris.</p>',
    'format' => 'textbook_editor',
    'name' => 'image_boxed',
    'content_types' => array(),
  );
  $templates['image_left'] = array(
    'title' => 'Image Left',
    'description' => '',
    'weight' => 6,
    'fid' => 8,
    'body' => '<p>Lorem ipsum Adipisicing laborum sint mollit qui irure eiusmod aute ad proident aliqua amet dolor dolore culpa est amet cillum ex aute cupidatat officia ullamco culpa sunt velit ullamco labore Duis magna id dolor qui tempor ea dolore in commodo velit nostrud ex laboris nulla nisi aliquip ut elit Duis Duis laborum irure sit reprehenderit consequat ut ut pariatur non dolor in sint dolor labore et laborum nisi fugiat dolor cupidatat aute reprehenderit sed fugiat dolor ex eu deserunt irure sed qui elit aliquip sint aliqua et amet enim aliquip enim do elit dolor elit incididunt sed pariatur eu dolore qui consequat amet minim irure Excepteur dolore anim anim laborum dolor quis nulla officia non eiusmod non tempor culpa id voluptate consequat nostrud dolor Excepteur veniam esse laboris eu Ut consectetur dolor aute magna est ex nulla nisi non cupidatat aliqua amet irure dolore Duis amet ad anim pariatur occaecat exercitation officia ullamco eu nulla commodo et est incididunt mollit pariatur exercitation veniam eu labore fugiat cupidatat nostrud deserunt eu.</p><figure class="image image--left"><img alt="This is the images alt info." class="image__img" src="https://unsplash.it/1200/600" /> <cite class="image__cite">Here is the citation or photo credit for the image.</cite><figcaption class="image__caption"><p>This is the caption for the image.</p></figcaption></figure><p>Lorem ipsum Minim do adipisicing veniam consectetur fugiat aliqua eu quis esse irure tempor est eu ex officia minim reprehenderit in laborum cillum pariatur consequat quis culpa in amet Excepteur in sit laborum exercitation Ut laboris labore est aliquip nulla do quis eu est labore quis aliqua ea sint ea pariatur non Excepteur mollit id mollit Excepteur veniam do anim irure elit sint officia adipisicing dolore reprehenderit elit cillum ad amet tempor veniam id ut consequat quis do proident ut nostrud dolor sunt magna non qui dolore eiusmod ullamco exercitation ex eiusmod dolore Duis anim mollit anim esse mollit quis officia adipisicing dolore mollit ad commodo occaecat sed in ut elit minim Duis nostrud in elit id consequat Excepteur ex aliquip est sint dolore eiusmod in dolore consequat Ut proident consectetur ut dolore laborum tempor magna magna dolor ex quis veniam aliquip dolore enim non minim laboris quis amet quis dolore anim irure ad Excepteur Excepteur consectetur do sed deserunt occaecat qui eu anim veniam dolore ex aute consequat veniam qui nulla nisi eiusmod velit ad ut quis esse Ut officia irure enim exercitation aute non culpa Duis consequat magna cupidatat minim minim elit laboris.</p>',
    'format' => 'textbook_editor',
    'name' => 'image_left',
    'content_types' => array(),
  );
  $templates['image_lightboxed'] = array(
    'title' => 'Image Lightboxed',
    'description' => 'This is an example of how to use the imagelightbox widget in conjuction with the image component.',
    'weight' => 9,
    'fid' => 11,
    'body' => '<p>Lorem ipsum Adipisicing laborum sint mollit qui irure eiusmod aute ad proident aliqua amet dolor dolore culpa est amet cillum ex aute cupidatat officia ullamco culpa sunt velit ullamco labore Duis magna id dolor qui tempor ea dolore in commodo velit nostrud ex laboris nulla nisi aliquip ut elit Duis Duis laborum irure sit reprehenderit consequat ut ut pariatur non dolor in sint dolor labore et laborum nisi fugiat dolor cupidatat aute reprehenderit sed fugiat dolor ex eu deserunt irure sed qui elit aliquip sint aliqua et amet enim aliquip enim do elit dolor elit incididunt sed pariatur eu dolore qui consequat amet minim irure Excepteur dolore anim anim laborum dolor quis nulla officia non eiusmod non tempor culpa id voluptate consequat nostrud dolor Excepteur veniam esse laboris eu Ut consectetur dolor aute magna est ex nulla nisi non cupidatat aliqua amet irure dolore Duis amet ad anim pariatur occaecat exercitation officia ullamco eu nulla commodo et est incididunt mollit pariatur exercitation veniam eu labore fugiat cupidatat nostrud deserunt eu.</p><figure class="image image--left"><a data-imagelightbox="" href="https://unsplash.it/1200/800/"><img alt="This is the images alt info." class="image__img" src="https://unsplash.it/1200/800/" />&nbsp;</a> <cite class="image__cite">Here is the citation or photo credit for the image.</cite><figcaption class="image__caption"><p>This is the caption for the image.</p></figcaption></figure><p>Lorem ipsum Minim do adipisicing veniam consectetur fugiat aliqua eu quis esse irure tempor est eu ex officia minim reprehenderit in laborum cillum pariatur consequat quis culpa in amet Excepteur in sit laborum exercitation Ut laboris labore est aliquip nulla do quis eu est labore quis aliqua ea sint ea pariatur non Excepteur mollit id mollit Excepteur veniam do anim irure elit sint officia adipisicing dolore reprehenderit elit cillum ad amet tempor veniam id ut consequat quis do proident ut nostrud dolor sunt magna non qui dolore eiusmod ullamco exercitation ex eiusmod dolore Duis anim mollit anim esse mollit quis officia adipisicing dolore mollit ad commodo occaecat sed in ut elit minim Duis nostrud in elit id consequat Excepteur ex aliquip est sint dolore eiusmod in dolore consequat Ut proident consectetur ut dolore laborum tempor magna magna dolor ex quis veniam aliquip dolore enim non minim laboris quis amet quis dolore anim irure ad Excepteur Excepteur consectetur do sed deserunt occaecat qui eu anim veniam dolore ex aute consequat veniam qui nulla nisi eiusmod velit ad ut quis esse Ut officia irure enim exercitation aute non culpa Duis consequat magna cupidatat minim minim elit laboris.</p>',
    'format' => 'textbook_editor',
    'name' => 'image_lightboxed',
    'content_types' => array(),
  );
  $templates['image_right'] = array(
    'title' => 'Image Right',
    'description' => '',
    'weight' => 7,
    'fid' => 9,
    'body' => '<p>Lorem ipsum Adipisicing laborum sint mollit qui irure eiusmod aute ad proident aliqua amet dolor dolore culpa est amet cillum ex aute cupidatat officia ullamco culpa sunt velit ullamco labore Duis magna id dolor qui tempor ea dolore in commodo velit nostrud ex laboris nulla nisi aliquip ut elit Duis Duis laborum irure sit reprehenderit consequat ut ut pariatur non dolor in sint dolor labore et laborum nisi fugiat dolor cupidatat aute reprehenderit sed fugiat dolor ex eu deserunt irure sed qui elit aliquip sint aliqua et amet enim aliquip enim do elit dolor elit incididunt sed pariatur eu dolore qui consequat amet minim irure Excepteur dolore anim anim laborum dolor quis nulla officia non eiusmod non tempor culpa id voluptate consequat nostrud dolor Excepteur veniam esse laboris eu Ut consectetur dolor aute magna est ex nulla nisi non cupidatat aliqua amet irure dolore Duis amet ad anim pariatur occaecat exercitation officia ullamco eu nulla commodo et est incididunt mollit pariatur exercitation veniam eu labore fugiat cupidatat nostrud deserunt eu.</p><figure class="image image--right"><img alt="This is the images alt info." class="image__img" src="https://unsplash.it/600/1200/" /> <cite class="image__cite">Here is the citation or photo credit for the image.</cite><figcaption class="image__caption"><p>This is the caption for the image.</p></figcaption></figure><p>Lorem ipsum Minim do adipisicing veniam consectetur fugiat aliqua eu quis esse irure tempor est eu ex officia minim reprehenderit in laborum cillum pariatur consequat quis culpa in amet Excepteur in sit laborum exercitation Ut laboris labore est aliquip nulla do quis eu est labore quis aliqua ea sint ea pariatur non Excepteur mollit id mollit Excepteur veniam do anim irure elit sint officia adipisicing dolore reprehenderit elit cillum ad amet tempor veniam id ut consequat quis do proident ut nostrud dolor sunt magna non qui dolore eiusmod ullamco exercitation ex eiusmod dolore Duis anim mollit anim esse mollit quis officia adipisicing dolore mollit ad commodo occaecat sed in ut elit minim Duis nostrud in elit id consequat Excepteur ex aliquip est sint dolore eiusmod in dolore consequat Ut proident consectetur ut dolore laborum tempor magna magna dolor ex quis veniam aliquip dolore enim non minim laboris quis amet quis dolore anim irure ad Excepteur Excepteur consectetur do sed deserunt occaecat qui eu anim veniam dolore ex aute consequat veniam qui nulla nisi eiusmod velit ad ut quis esse Ut officia irure enim exercitation aute non culpa Duis consequat magna cupidatat minim minim elit laboris.</p>',
    'format' => 'textbook_editor',
    'name' => 'image_right',
    'content_types' => array(),
  );
  $templates['media_video'] = array(
    'title' => 'Media Video',
    'description' => 'Description',
    'weight' => 1,
    'fid' => 3,
    'body' => '<figure class="mediavideo"><div class="mediavideo__video-wrapper"><iframe frameborder="0" src="https://www.youtube.com/embed/UvEiSa6_EPA?rel=0&amp;showinfo=0"></iframe><script src="https://platform.vine.co/static/scripts/embed.js"></script></div></figure>',
    'format' => 'textbook_editor',
    'name' => 'media_video',
    'content_types' => array(),
  );
  $templates['media_video_thumbnail'] = array(
    'title' => 'Media Video Thumbnail',
    'description' => 'Description',
    'weight' => 2,
    'fid' => 4,
    'body' => '<p>Lorem ipsum Quis eu velit amet ut deserunt qui et et ut exercitation sit dolore do non labore laborum cillum mollit adipisicing ut est fugiat incididunt laboris aliquip ad non anim quis commodo mollit dolore qui eu est consequat dolore mollit cillum id adipisicing sit veniam magna sunt id sit ut incididunt esse in sed ex consequat culpa tempor deserunt sed minim proident dolor et ullamco aute incididunt ad elit incididunt ullamco ea laboris sunt et aute amet cillum voluptate cillum ut irure dolore proident nulla eu fugiat est aute Excepteur minim do anim dolore nostrud consequat cupidatat dolor dolor pariatur sed Excepteur sit id sunt in cillum amet sint laborum incididunt ut sit dolore eu commodo sit qui Ut velit ullamco occaecat reprehenderit non laborum exercitation dolore enim reprehenderit velit exercitation sit commodo consectetur dolore nostrud adipisicing mollit dolor dolor minim commodo Duis ut enim cillum elit ullamco anim deserunt proident velit proident reprehenderit dolor magna pariatur nisi enim Duis culpa elit laborum minim sint est dolor deserunt adipisicing ut anim consequat sunt nulla quis ad culpa Excepteur sit laborum dolore consectetur ex aliqua magna sunt quis mollit ea dolor in Ut adipisicing non in cillum cillum cupidatat anim exercitation sunt laborum aliqua in ut dolore eu cupidatat.</p><figure class="mediavideo mediavideo--thumbnail"><div class="mediavideo__video-wrapper"><iframe allowfullscreen="" data-mediavideo-src="https://www.youtube.com/embed/UvEiSa6_EPA?rel=0&amp;showinfo=0" frameborder="0"></iframe></div><aside class="mediavideo__poster"><img src="https://unsplash.it/1200/800/" /></aside></figure><p>Lorem ipsum Quis eu velit amet ut deserunt qui et et ut exercitation sit dolore do non labore laborum cillum mollit adipisicing ut est fugiat incididunt laboris aliquip ad non anim quis commodo mollit dolore qui eu est consequat dolore mollit cillum id adipisicing sit veniam magna sunt id sit ut incididunt esse in sed ex consequat culpa tempor deserunt sed minim proident dolor et ullamco aute incididunt ad elit incididunt ullamco ea laboris sunt et aute amet cillum voluptate cillum ut irure dolore proident nulla eu fugiat est aute Excepteur minim do anim dolore nostrud consequat cupidatat dolor dolor pariatur sed Excepteur sit id sunt in cillum amet sint laborum incididunt ut sit dolore eu commodo sit qui Ut velit ullamco occaecat reprehenderit non laborum exercitation dolore enim reprehenderit velit exercitation sit commodo consectetur dolore nostrud adipisicing mollit dolor dolor minim commodo Duis ut enim cillum elit ullamco anim deserunt proident velit proident reprehenderit dolor magna pariatur nisi enim Duis culpa elit laborum minim sint est dolor deserunt adipisicing ut anim consequat sunt nulla quis ad culpa Excepteur sit laborum dolore consectetur ex aliqua magna sunt quis mollit ea dolor in Ut adipisicing non in cillum cillum cupidatat anim exercitation sunt laborum aliqua in ut dolore eu cupidatat.</p>',
    'format' => 'textbook_editor',
    'name' => 'media_video_thumbnail',
    'content_types' => array(),
  );
  $templates['media_video_thumbnail_right'] = array(
    'title' => 'Media Video Thumbnail Right',
    'description' => 'Description',
    'weight' => 3,
    'fid' => 5,
    'body' => '<p>Lorem ipsum Quis eu velit amet ut deserunt qui et et ut exercitation sit dolore do non labore laborum cillum mollit adipisicing ut est fugiat incididunt laboris aliquip ad non anim quis commodo mollit dolore qui eu est consequat dolore mollit cillum id adipisicing sit veniam magna sunt id sit ut incididunt esse in sed ex consequat culpa tempor deserunt sed minim proident dolor et ullamco aute incididunt ad elit incididunt ullamco ea laboris sunt et aute amet cillum voluptate cillum ut irure dolore proident nulla eu fugiat est aute Excepteur minim do anim dolore nostrud consequat cupidatat dolor dolor pariatur sed Excepteur sit id sunt in cillum amet sint laborum incididunt ut sit dolore eu commodo sit qui Ut velit ullamco occaecat reprehenderit non laborum exercitation dolore enim reprehenderit velit exercitation sit commodo consectetur dolore nostrud adipisicing mollit dolor dolor minim commodo Duis ut enim cillum elit ullamco anim deserunt proident velit proident reprehenderit dolor magna pariatur nisi enim Duis culpa elit laborum minim sint est dolor deserunt adipisicing ut anim consequat sunt nulla quis ad culpa Excepteur sit laborum dolore consectetur ex aliqua magna sunt quis mollit ea dolor in Ut adipisicing non in cillum cillum cupidatat anim exercitation sunt laborum aliqua in ut dolore eu cupidatat.</p><figure class="mediavideo mediavideo--thumbnail-right"><div class="mediavideo__video-wrapper"><iframe allowfullscreen="" data-mediavideo-src="https://www.youtube.com/embed/UvEiSa6_EPA?rel=0&amp;showinfo=0" frameborder="0"></iframe></div><aside class="mediavideo__poster"><img src="https://unsplash.it/1200/800/" /></aside></figure><p>Lorem ipsum Quis eu velit amet ut deserunt qui et et ut exercitation sit dolore do non labore laborum cillum mollit adipisicing ut est fugiat incididunt laboris aliquip ad non anim quis commodo mollit dolore qui eu est consequat dolore mollit cillum id adipisicing sit veniam magna sunt id sit ut incididunt esse in sed ex consequat culpa tempor deserunt sed minim proident dolor et ullamco aute incididunt ad elit incididunt ullamco ea laboris sunt et aute amet cillum voluptate cillum ut irure dolore proident nulla eu fugiat est aute Excepteur minim do anim dolore nostrud consequat cupidatat dolor dolor pariatur sed Excepteur sit id sunt in cillum amet sint laborum incididunt ut sit dolore eu commodo sit qui Ut velit ullamco occaecat reprehenderit non laborum exercitation dolore enim reprehenderit velit exercitation sit commodo consectetur dolore nostrud adipisicing mollit dolor dolor minim commodo Duis ut enim cillum elit ullamco anim deserunt proident velit proident reprehenderit dolor magna pariatur nisi enim Duis culpa elit laborum minim sint est dolor deserunt adipisicing ut anim consequat sunt nulla quis ad culpa Excepteur sit laborum dolore consectetur ex aliqua magna sunt quis mollit ea dolor in Ut adipisicing non in cillum cillum cupidatat anim exercitation sunt laborum aliqua in ut dolore eu cupidatat.</p>',
    'format' => 'textbook_editor',
    'name' => 'media_video_thumbnail_right',
    'content_types' => array(),
  );
  $templates['media_video_with_poster'] = array(
    'title' => 'Media Video With Poster',
    'description' => 'STILL IN DEVELOPMENT. This uses a psudo lazy load technique to allow the play button to start the video.',
    'weight' => 4,
    'fid' => 6,
    'body' => '<figure class="mediavideo mediavideo--poster"><div class="mediavideo__video-wrapper"><iframe allowfullscreen="" data-mediavideo-src="https://www.youtube.com/embed/CKZLuYOnPCk?rel=0&amp;showinfo=0" frameborder="0"></iframe></div><aside class="mediavideo__poster"><img src="https://unsplash.it/1200/800/" /></aside></figure><figure class="mediavideo mediavideo--poster"><div class="mediavideo__video-wrapper"><iframe allowfullscreen="" data-mediavideo-src="https://player.vimeo.com/video/111237065?title=0&amp;byline=0&amp;portrait=0" frameborder="0" height="281" mozallowfullscreen="" webkitallowfullscreen="" width="500"></iframe><p><a href="https://vimeo.com/104641191">Jeffrey Zeldman: 20 years of Web Design and Community</a> from <a href="https://vimeo.com/lyndavimeo">lynda.com</a> on <a href="https://vimeo.com">Vimeo</a>.</p></div><aside class="mediavideo__poster"><img src="https://unsplash.it/1200/800/" /></aside></figure>',
    'format' => 'textbook_editor',
    'name' => 'media_video_with_poster',
    'content_types' => array(),
  );
  $templates['quote_examples'] = array(
    'title' => 'Quote Examples',
    'description' => '',
    'weight' => 13,
    'fid' => 15,
    'body' => '<p>Lorem ipsum Duis Ut non nulla amet laborum commodo aute dolor in consequat aliquip culpa non ut laboris in consequat tempor et veniam do ullamco est fugiat incididunt incididunt et cupidatat Excepteur proident mollit minim labore mollit velit exercitation laboris nulla ullamco aliquip exercitation cupidatat ad dolore nisi cillum commodo pariatur mollit dolore in eu tempor aliquip aute sunt nulla esse amet in dolor ad laboris aute non occaecat voluptate quis irure sit nisi consectetur tempor veniam aute fugiat culpa occaecat nostrud velit dolore minim dolor quis dolor ea esse aliqua ullamco do esse sint anim elit cupidatat laborum veniam ut anim labore minim aliqua proident et aute in laboris do laborum ea occaecat elit.</p><p class="quote">In open source, we feel strongly that to really do something well, you have to get a lot of people involved.</p><p>Lorem ipsum Dolor commodo irure ut sed ea dolore mollit aute ullamco in in cupidatat ut mollit quis dolor reprehenderit nulla officia occaecat veniam proident laboris cillum reprehenderit dolore adipisicing nulla commodo aute elit minim sit enim enim anim deserunt aliqua cillum aute Ut nostrud adipisicing Excepteur ex incididunt deserunt dolore est Duis qui eu sint amet nulla voluptate aliqua deserunt in enim deserunt et dolore velit aliqua do elit commodo laborum id cillum cupidatat esse quis cillum Duis culpa exercitation velit Duis in officia nulla.</p><p>Lorem ipsum Duis Ut non nulla amet laborum commodo aute dolor in consequat aliquip culpa non ut laboris in consequat tempor et veniam do ullamco est fugiat incididunt incididunt et cupidatat Excepteur proident mollit minim labore mollit velit exercitation laboris nulla ullamco aliquip exercitation cupidatat ad dolore nisi cillum commodo pariatur mollit dolore in eu tempor aliquip aute sunt nulla esse amet in dolor ad laboris aute non occaecat voluptate quis irure sit nisi consectetur tempor veniam aute fugiat culpa occaecat nostrud velit dolore minim dolor quis dolor ea esse aliqua ullamco do esse sint anim elit cupidatat laborum veniam ut anim labore minim aliqua proident et aute in laboris do laborum ea occaecat elit.</p><p class="quote quote--left">In open source, we feel strongly that to really do something well, you have to get a lot of people involved.</p><p>Lorem ipsum Dolor commodo irure ut sed ea dolore mollit aute ullamco in in cupidatat ut mollit quis dolor reprehenderit nulla officia occaecat veniam proident laboris cillum reprehenderit dolore adipisicing nulla commodo aute elit minim sit enim enim anim deserunt aliqua cillum aute Ut nostrud adipisicing Excepteur ex incididunt deserunt dolore est Duis qui eu sint amet nulla voluptate aliqua deserunt in enim deserunt et dolore velit aliqua do elit commodo laborum id cillum cupidatat esse quis cillum Duis culpa exercitation velit Duis in officia nulla.</p><p>Lorem ipsum Duis Ut non nulla amet laborum commodo aute dolor in consequat aliquip culpa non ut laboris in consequat tempor et veniam do ullamco est fugiat incididunt incididunt et cupidatat Excepteur proident mollit minim labore mollit velit exercitation laboris nulla ullamco aliquip exercitation cupidatat ad dolore nisi cillum commodo pariatur mollit dolore in eu tempor aliquip aute sunt nulla esse amet in dolor ad laboris aute non occaecat voluptate quis irure sit nisi consectetur tempor veniam aute fugiat culpa occaecat nostrud velit dolore minim dolor quis dolor ea esse aliqua ullamco do esse sint anim elit cupidatat laborum veniam ut anim labore minim aliqua proident et aute in laboris do laborum ea occaecat elit.</p><p class="quote quote--right">In open source, we feel strongly that to really do something well, you have to get a lot of people involved.</p><p>Lorem ipsum Dolor commodo irure ut sed ea dolore mollit aute ullamco in in cupidatat ut mollit quis dolor reprehenderit nulla officia occaecat veniam proident laboris cillum reprehenderit dolore adipisicing nulla commodo aute elit minim sit enim enim anim deserunt aliqua cillum aute Ut nostrud adipisicing Excepteur ex incididunt deserunt dolore est Duis qui eu sint amet nulla voluptate aliqua deserunt in enim deserunt et dolore velit aliqua do elit commodo laborum id cillum cupidatat esse quis cillum Duis culpa exercitation velit Duis in officia nulla.</p><p>Lorem ipsum Duis Ut non nulla amet laborum commodo aute dolor in consequat aliquip culpa non ut laboris in consequat tempor et veniam do ullamco est fugiat incididunt incididunt et cupidatat Excepteur proident mollit minim labore mollit velit exercitation laboris nulla ullamco aliquip exercitation cupidatat ad dolore nisi cillum commodo pariatur mollit dolore in eu tempor aliquip aute sunt nulla esse amet in dolor ad laboris aute non occaecat voluptate quis irure sit nisi consectetur tempor veniam aute fugiat culpa occaecat nostrud velit dolore minim dolor quis dolor ea esse aliqua ullamco do esse sint anim elit cupidatat laborum veniam ut anim labore minim aliqua proident et aute in laboris do laborum ea occaecat elit.</p><p class="quote">In open source, we feel strongly that to really do something well, you have to get a lot of people involved.</p><p>Lorem ipsum Dolor commodo irure ut sed ea dolore mollit aute ullamco in in cupidatat ut mollit quis dolor reprehenderit nulla officia occaecat veniam proident laboris cillum reprehenderit dolore adipisicing nulla commodo aute elit minim sit enim enim anim deserunt aliqua cillum aute Ut nostrud adipisicing Excepteur ex incididunt deserunt dolore est Duis qui eu sint amet nulla voluptate aliqua deserunt in enim deserunt et dolore velit aliqua do elit commodo laborum id cillum cupidatat esse quis cillum Duis culpa exercitation velit Duis in officia nulla.</p>',
    'format' => 'textbook_editor',
    'name' => 'quote_examples',
    'content_types' => array(),
  );
  $templates['quote_left'] = array(
    'title' => 'Quote Left',
    'description' => '',
    'weight' => 11,
    'fid' => 13,
    'body' => '<p class="quote quote--left">In open source, we feel strongly that to really do something well, you have to get a lot of people involved.</p>',
    'format' => 'textbook_editor',
    'name' => 'quote_left',
    'content_types' => array(),
  );
  $templates['quote_right'] = array(
    'title' => 'Quote Right',
    'description' => '',
    'weight' => 12,
    'fid' => 14,
    'body' => '<p class="quote quote--right">In open source, we feel strongly that to really do something well, you have to get a lot of people involved.</p>',
    'format' => 'textbook_editor',
    'name' => 'quote_right',
    'content_types' => array(),
  );
  return $templates;
}