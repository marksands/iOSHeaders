//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSATheme.h>

__attribute__((visibility("hidden")))
@interface TPTheme : TSATheme
{
}

+ (id)themeWithContext:(id)arg1 alternate:(int)arg2 withStylesheet:(id)arg3;
+ (void)initialize;
- (void)saveToArchiver:(id)arg1;
- (void)p_saveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)footnoteStyle;
- (id)headerAndFooterStyle;
- (id)bodyStyle;
- (id)_paragraphStylePresetWithName:(id)arg1 orContentTag:(id)arg2;

@end

