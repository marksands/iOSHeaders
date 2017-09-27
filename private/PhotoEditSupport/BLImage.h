//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CIImage, UIImage;

@interface BLImage : NSObject <NSCopying>
{
    UIImage *_UIImage;
    struct CGImage *_CGImage;
    CIImage *_CIImage;
    int _storageType;
    struct CGSize _size;
    _Bool _isPlaceholder;
    int _askedImageType;
    int _obtainedImageType;
}

+ (id)abbreviatedDescriptionWithImageType:(int)arg1;
+ (id)descriptionWithImageType:(int)arg1;
+ (id)imageWithImage:(id)arg1;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(nonatomic) int obtainedImageType; // @synthesize obtainedImageType=_obtainedImageType;
@property(nonatomic) int askedImageType; // @synthesize askedImageType=_askedImageType;
@property(readonly, nonatomic) int storageType; // @synthesize storageType=_storageType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned long long memoryUsage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) long long imageOrientation;
@property(readonly, nonatomic) struct CGSize size;
- (id)CIImage;
- (struct CGImage *)CGImage;
- (id)UIImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileAtURL:(id)arg1;
- (id)init;

@end

