//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INImageServing.h"

@class INImage;

@protocol INImageLoading <INImageServing>
- (void)loadImageDataFromImage:(INImage *)arg1 completion:(void (^)(INImage *, NSError *))arg2;
- (_Bool)canLoadImageDataForImage:(INImage *)arg1;
@end

