//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXButton.h>

@interface SXVideoButton : SXButton
{
    unsigned long long _videoButtonType;
}

+ (id)imageForButtonWithType:(unsigned long long)arg1;
+ (id)videoButtonWithType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long videoButtonType; // @synthesize videoButtonType=_videoButtonType;
- (struct CGSize)intrinsicContentSize;

@end

