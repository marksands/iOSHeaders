//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIImage;

@interface CKAnimatedImage : NSObject
{
    UIImage *_image;
    NSArray *_durations;
}

+ (_Bool)_writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (_Bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3;
+ (id)animatedImageWithContentsOfCPBitmapURL:(id)arg1;
+ (id)filenameExtension;
+ (_Bool)_writeImagesWithDurations:(id)arg1 toOutputStream:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (_Bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3;
+ (id)ASTCDataForImagesWithDurations:(id)arg1 imageProvider:(CDUnknownBlockType)arg2;
+ (id)animatedImageWithASTCData:(id)arg1;
+ (id)animatedImageWithContentsOfASTCURL:(id)arg1;
+ (_Bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (_Bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) NSArray *durations; // @synthesize durations=_durations;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)_initWithImage:(id)arg1 durations:(id)arg2;
- (_Bool)writeToCPBitmapURL:(id)arg1;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithImages:(id)arg1 durations:(id)arg2;
- (id)description;
- (_Bool)writeToASTCURL:(id)arg1;
- (id)frames;

@end

