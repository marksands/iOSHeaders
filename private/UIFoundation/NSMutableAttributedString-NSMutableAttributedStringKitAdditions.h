//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableAttributedString.h"

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (_Bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (void)unscriptRange:(struct _NSRange)arg1;
- (void)subscriptRange:(struct _NSRange)arg1;
- (void)superscriptRange:(struct _NSRange)arg1;
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange)arg3;
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange)arg2;
- (void)setAlignment:(long long)arg1 range:(struct _NSRange)arg2;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg1;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg1;
- (void)fixFontAttributeInRange:(struct _NSRange)arg1;
- (_Bool)_shouldSetOriginalFontAttribute;
- (void)fixAttributesInRange:(struct _NSRange)arg1;
- (void)_setAttributeFixingInProgress:(_Bool)arg1;
- (_Bool)_attributeFixingInProgress;
@end

