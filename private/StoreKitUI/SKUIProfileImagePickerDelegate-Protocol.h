//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSValue, SKUIProfileImagePicker, UIImage;

@protocol SKUIProfileImagePickerDelegate <NSObject>
- (void)profileImagePicker:(SKUIProfileImagePicker *)arg1 didPickProfileImage:(UIImage *)arg2 withCropRect:(NSValue *)arg3;
- (void)profileImagePickerDidCancel:(SKUIProfileImagePicker *)arg1;
@end

