//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/MFPhoneBrush.h>

@class MFPhoneBitmap;

__attribute__((visibility("hidden")))
@interface MFPhonePatternBrush : MFPhoneBrush
{
    MFPhoneBitmap *m_pattern;
    _Bool m_usePaletteForBilevel;
}

+ (id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(_Bool)arg2;
- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (void)dealloc;
- (id)initWithBitmap:(id)arg1 usePaletteForBilevel:(_Bool)arg2;

@end

