//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString, NSURL, NTKPhotoAnalysis;

@interface NTKPhoto : NSObject <NSCopying>
{
    _Bool _isIris;
    NSString *_localIdentifier;
    NSDate *_modificationDate;
    NSURL *_imageURL;
    NTKPhotoAnalysis *_topAnalysis;
    NTKPhotoAnalysis *_bottomAnalysis;
    NSURL *_irisVideoURL;
    double _irisDuration;
    double _irisStillDisplayTime;
    struct CGRect _originalCrop;
    struct CGRect _crop;
}

+ (id)decodeFromDictionary:(id)arg1 forResourceDirectory:(id)arg2;
@property(nonatomic) double irisStillDisplayTime; // @synthesize irisStillDisplayTime=_irisStillDisplayTime;
@property(nonatomic) double irisDuration; // @synthesize irisDuration=_irisDuration;
@property(copy, nonatomic) NSURL *irisVideoURL; // @synthesize irisVideoURL=_irisVideoURL;
@property(nonatomic) _Bool isIris; // @synthesize isIris=_isIris;
@property(copy, nonatomic) NTKPhotoAnalysis *bottomAnalysis; // @synthesize bottomAnalysis=_bottomAnalysis;
@property(copy, nonatomic) NTKPhotoAnalysis *topAnalysis; // @synthesize topAnalysis=_topAnalysis;
@property(nonatomic) struct CGRect crop; // @synthesize crop=_crop;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) struct CGRect originalCrop; // @synthesize originalCrop=_originalCrop;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqualToAsset:(id)arg1;
- (_Bool)isEqualToPhoto:(id)arg1;
- (id)encodeAsDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithLegacySidecar:(id)arg1;

@end
