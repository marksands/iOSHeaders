//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface AssetCollectionInfo : NSObject <NSSecureCoding>
{
    _Bool _isMine;
    _Bool _isVideo;
    _Bool _isPhotoIris;
    _Bool _isDeletable;
    unsigned short _playbackVariation;
    NSString *_GUID;
    NSString *_personID;
    NSDictionary *_metaData;
    NSNumber *_width;
    NSNumber *_height;
    NSDate *_timestamp;
    NSString *_derivativeUTI;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) NSString *derivativeUTI; // @synthesize derivativeUTI=_derivativeUTI;
@property(readonly, retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, retain, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(readonly, nonatomic) _Bool isDeletable; // @synthesize isDeletable=_isDeletable;
@property(readonly, nonatomic) unsigned short playbackVariation; // @synthesize playbackVariation=_playbackVariation;
@property(readonly, nonatomic) _Bool isPhotoIris; // @synthesize isPhotoIris=_isPhotoIris;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(readonly, nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(readonly, retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(readonly, retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetCollection:(id)arg1;

@end

