//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCRecording.h"

@class CLLocation, NSDate, NSString;

@protocol RCMutableRecording <RCRecording>
@property(nonatomic) _Bool editing;
@property(nonatomic) _Bool manuallyRenamed;
@property(nonatomic) _Bool playable;
@property(nonatomic) _Bool pendingRestore;
@property(nonatomic) _Bool synced;
@property(nonatomic) long long iTunesPersistentID;
@property(copy, nonatomic) NSString *uniqueID;
@property(copy, nonatomic) NSString *customLabel;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) CLLocation *location;
@property(nonatomic) double duration;
@property(copy, nonatomic) NSString *path;
@property(copy, nonatomic) NSDate *evictionDate;
@property(copy, nonatomic) NSDate *date;
@end

