//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface SBFWallpaperOptions : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>
{
    _Bool _magnifyEnabled;
    _Bool _supportsCropping;
    _Bool _portrait;
    _Bool _hasVideo;
    NSString *_name;
    double _parallaxFactor;
    double _zoomScale;
    double _stillTimeInVideo;
    struct CGRect _cropRect;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(_Bool)arg4 cropRect:(struct CGRect)arg5 portrait:(_Bool)arg6 hasVideo:(_Bool)arg7 stillTimeInVideo:(double)arg8;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(_Bool)arg4 cropRect:(struct CGRect)arg5 portrait:(_Bool)arg6;
@property(nonatomic) double stillTimeInVideo; // @synthesize stillTimeInVideo=_stillTimeInVideo;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic, getter=isPortrait) _Bool portrait; // @synthesize portrait=_portrait;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) _Bool supportsCropping; // @synthesize supportsCropping=_supportsCropping;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic, getter=isMagnifyEnabled) _Bool magnifyEnabled; // @synthesize magnifyEnabled=_magnifyEnabled;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSData *persistentDataRepresentation;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)persistentPropertyList;
@property(readonly) unsigned long long hash;
- (_Bool)isLooselyEqualToWallpaperOptions:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)bestWallpaperSizeForWallpaperSize:(struct CGSize)arg1 wallpaperScale:(double)arg2 deviceType:(long long)arg3 imageScale:(double)arg4;
@property(readonly, nonatomic) _Bool parallaxEnabled;
- (id)initWithStream:(id)arg1;
- (id)initWithPersistentDataRepresentation:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(_Bool)arg4 cropRect:(struct CGRect)arg5 portrait:(_Bool)arg6 hasVideo:(_Bool)arg7 stillTimeInVideo:(double)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

