//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKPlayer, NSData;

@interface GKMatchEvent : NSObject
{
    NSData *_data;
    GKPlayer *_recipientPlayer;
}

@property(retain, nonatomic) GKPlayer *recipientPlayer; // @synthesize recipientPlayer=_recipientPlayer;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;

@end

