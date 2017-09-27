//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPDataAttributes.h>

__attribute__((visibility("hidden")))
@interface TSDImageDataAttributes : TSPDataAttributes
{
    _Bool _hasPixelSize;
    struct CGSize _pixelSize;
    _Bool _imageIsSRGB;
    _Bool _hasImageIsSRGB;
    _Bool _shouldBeInterpretedAsGenericIfUntagged;
}

@property(readonly, nonatomic) _Bool shouldBeInterpretedAsGenericIfUntagged; // @synthesize shouldBeInterpretedAsGenericIfUntagged=_shouldBeInterpretedAsGenericIfUntagged;
@property(readonly, nonatomic) _Bool hasImageIsSRGB; // @synthesize hasImageIsSRGB=_hasImageIsSRGB;
@property(readonly, nonatomic) _Bool hasPixelSize; // @synthesize hasPixelSize=_hasPixelSize;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
- (id)description;
@property(readonly, nonatomic) _Bool imageIsSRGB; // @synthesize imageIsSRGB=_imageIsSRGB;
- (struct CGSize)size;
- (id)copyWithShouldBeInterpretedAsGenericIfUntagged:(_Bool)arg1;
- (id)copyWithIsSRGB:(_Bool)arg1;
- (id)copyWithPixelSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToMessage:(struct DataAttributes *)arg1;
- (id)initWithMessage:(const struct DataAttributes *)arg1;
- (id)initWithShouldBeInterpretedAsGenericIfUntagged:(_Bool)arg1;
- (id)initWithIsSRGB:(_Bool)arg1;
- (id)initWithPixelSize:(struct CGSize)arg1;
- (id)init;

@end

