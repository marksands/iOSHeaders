//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface CLSNotificationBannerDisplayManager : NSObject
{
    NSDate *_lastBannerTime;
}

+ (id)shared;
@property(retain, nonatomic) NSDate *lastBannerTime; // @synthesize lastBannerTime=_lastBannerTime;
- (void).cxx_destruct;
- (void)showBannerWithTitle:(id)arg1 message:(id)arg2;

@end
