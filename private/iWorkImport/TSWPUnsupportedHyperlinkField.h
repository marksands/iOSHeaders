//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPPlaceholderSmartField.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField
{
    NSString *_href;
}

- (void).cxx_destruct;
- (int)smartFieldKind;
- (_Bool)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)bookmarkHyperlinkForUnarchiving;
@property(copy, nonatomic) NSString *href;

@end

