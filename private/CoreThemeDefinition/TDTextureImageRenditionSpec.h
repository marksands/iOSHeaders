//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDTextureAsset, TDTextureMipLevel, TDTextureRenditionSpec, TDThemeCompressionType;

@interface TDTextureImageRenditionSpec : TDRenditionSpec
{
}

- (_Bool)canBePackedWithDocument:(id)arg1;
- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (struct CGImage *)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int *)arg3;
- (int)_pixelFormatOfCGImage:(struct CGImage *)arg1;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (id)textureFacesWithDocument:(id)arg1;
- (_Bool)isCubeMap;
@property(readonly, nonatomic) long long textureFormat;
@property(readonly, nonatomic) TDTextureRenditionSpec *texture;

// Remaining properties
@property(retain, nonatomic) TDTextureAsset *asset; // @dynamic asset;
@property(retain, nonatomic) TDThemeCompressionType *compressionType; // @dynamic compressionType;
@property(nonatomic) _Bool flipped; // @dynamic flipped;
@property(retain, nonatomic) TDTextureMipLevel *textureLevelAssignment; // @dynamic textureLevelAssignment;

@end

