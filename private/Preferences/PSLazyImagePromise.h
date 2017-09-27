//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSString, UIImage;

@interface PSLazyImagePromise : NSObject
{
    NSString *_imagePath;
    NSString *_imageName;
    NSBundle *_imageBundle;
    CDUnknownBlockType _loadBlock;
    UIImage *_image;
    _Bool _imageLoaded;
}

+ (id)imagePromiseWithLoadBlock:(CDUnknownBlockType)arg1;
+ (id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imagePromiseWithImagePath:(id)arg1;
@property(readonly, nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image;
- (void)loadImage;

@end

