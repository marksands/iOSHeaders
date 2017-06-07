//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OADColorContext, OADColorMap, OADColorScheme, OADFontScheme, OADStyleMatrix;
@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OADDrawingTheme : NSObject
{
    OADStyleMatrix *mStyleMatrix;
    OADFontScheme *mFontScheme;
    OADColorContext *mColorContext;
}

@property(readonly, nonatomic) OADColorContext *colorContext; // @synthesize colorContext=mColorContext;
@property(readonly, nonatomic) OADFontScheme *fontScheme; // @synthesize fontScheme=mFontScheme;
@property(readonly, nonatomic) OADStyleMatrix *styleMatrix; // @synthesize styleMatrix=mStyleMatrix;
- (id)description;
@property(readonly, nonatomic) id <OADColorPalette> colorPalette;
@property(readonly, nonatomic) OADColorMap *colorMap;
@property(readonly, nonatomic) OADColorScheme *colorScheme;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3;
- (id)initWithStyleMatrix:(id)arg1 fontScheme:(id)arg2 colorScheme:(id)arg3 colorMap:(id)arg4 colorPalette:(id)arg5;

@end

