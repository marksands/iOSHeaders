//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString;

@interface BPSRemoteImageView : UIImageView
{
    NSString *_desiredImageName;
    NSString *_fallbackImageName;
}

@property(copy, nonatomic) NSString *fallbackImageName; // @synthesize fallbackImageName=_fallbackImageName;
@property(copy, nonatomic) NSString *desiredImageName; // @synthesize desiredImageName=_desiredImageName;
- (void).cxx_destruct;
- (void)updateImagesWithAnimation:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

