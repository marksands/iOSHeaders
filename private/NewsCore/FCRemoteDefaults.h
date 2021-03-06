//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCThreadSafeMutableDictionary;

@interface FCRemoteDefaults : NSObject
{
    id <FCBackgroundTaskable> _backgroundTaskable;
    FCThreadSafeMutableDictionary *_remoteDefaults;
}

@property(readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults; // @synthesize remoteDefaults=_remoteDefaults;
@property(readonly, nonatomic) __weak id <FCBackgroundTaskable> backgroundTaskable; // @synthesize backgroundTaskable=_backgroundTaskable;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)URLRequest;
- (void)updateRemoteDefaults;
- (_Bool)isAvailable;
- (void)checkForUpdate;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)init;
- (id)initWithBackgroundTaskable:(id)arg1;

@end

