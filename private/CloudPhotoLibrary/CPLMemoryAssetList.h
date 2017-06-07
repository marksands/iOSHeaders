//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLMemoryAssetList : PBCodable <NSCopying>
{
    NSMutableArray *_assets;
    unsigned int _version;
    struct {
        unsigned int version:1;
    } _has;
}

+ (Class)assetType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasVersion;
- (id)assetAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)addAsset:(id)arg1;
- (void)clearAssets;

@end

