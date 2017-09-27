//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class OADFontReference, OADStyleMatrixReference;

__attribute__((visibility("hidden")))
@interface OADShapeStyle : NSObject <NSCopying>
{
    OADStyleMatrixReference *mLineReference;
    OADStyleMatrixReference *mFillReference;
    OADStyleMatrixReference *mEffectReference;
    OADFontReference *mFontReference;
}

+ (id)defaultOfficeShapeStyle;
+ (id)defaultShapeStyle;
- (id)description;
- (void)setFontReference:(id)arg1;
- (id)fontReference;
- (void)setEffectMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setEffectReference:(id)arg1;
- (id)effectReference;
- (void)setFillMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setFillReference:(id)arg1;
- (id)fillReference;
- (void)setLineMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setLineReference:(id)arg1;
- (id)lineReference;
- (void)applyToParagraphProperties:(id)arg1;
- (void)applyToTextListStyle:(id)arg1;
- (void)applyToTextBody:(id)arg1;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(_Bool)arg3 strokeWidthMultiplier:(float)arg4;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

