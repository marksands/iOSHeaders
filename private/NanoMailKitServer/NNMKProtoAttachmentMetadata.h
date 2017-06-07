//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying>
{
    NSString *_contentId;
    NSString *_fileName;
    unsigned int _fileSize;
    float _imageHeight;
    float _imageWidth;
    NSString *_mimePartNumber;
    unsigned int _type;
    _Bool _renderOnClient;
    struct {
        unsigned int fileSize:1;
        unsigned int imageHeight:1;
        unsigned int imageWidth:1;
        unsigned int type:1;
        unsigned int renderOnClient:1;
    } _has;
}

@property(retain, nonatomic) NSString *mimePartNumber; // @synthesize mimePartNumber=_mimePartNumber;
@property(nonatomic) float imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) float imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) _Bool renderOnClient; // @synthesize renderOnClient=_renderOnClient;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
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
@property(readonly, nonatomic) _Bool hasMimePartNumber;
@property(nonatomic) _Bool hasImageHeight;
@property(nonatomic) _Bool hasImageWidth;
@property(nonatomic) _Bool hasRenderOnClient;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasFileSize;
@property(readonly, nonatomic) _Bool hasFileName;
@property(readonly, nonatomic) _Bool hasContentId;

@end

