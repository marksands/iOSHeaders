//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface _ACPluginDB : NSObject
{
    NSMutableDictionary *mSearchDirectories;
    _Bool mDirty;
    NSObject<OS_dispatch_queue> *mDispatchQueue;
    struct function<void (AudioComponentVector &, AudioComponentVector &)> mNotificationCallback;
    struct function<void ()> mScanHashCallback;
    NSData *mCarbonComponentHash;
}

+ (id)path;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)initialScanDirectory:(id)arg1 priority:(int)arg2 components:(struct AudioComponentVector *)arg3;
- (struct AudioComponentVector)postInit:(_Bool)arg1;
- (void)writeIfDirty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
