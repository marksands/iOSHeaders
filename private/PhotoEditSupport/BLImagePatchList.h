//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BLImagePatchList : NSObject
{
    struct CGImage *_baseImage;
    struct CGSize _size;
    NSMutableArray *_patchArray;
}

+ (id)imagePatchListWithSingleImage:(struct CGImage *)arg1;
- (void).cxx_destruct;
- (id)description;
- (struct CGSize)size;
- (long long)count;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)removeAllPatches;
- (void)addPatch:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1;

@end

