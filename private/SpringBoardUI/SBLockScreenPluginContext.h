//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface SBLockScreenPluginContext : NSObject <NSCopying>
{
    NSString *_name;
    NSDictionary *_userInfo;
    id <FBSProcess> _process;
    CDUnknownBlockType _auxiliaryAnimation;
    id <SBLockScreenPluginLifecycleObserver> _observer;
}

+ (id)contextWithName:(id)arg1;
@property(retain, nonatomic) id <SBLockScreenPluginLifecycleObserver> observer; // @synthesize observer=_observer;
@property(copy, nonatomic) CDUnknownBlockType auxiliaryAnimation; // @synthesize auxiliaryAnimation=_auxiliaryAnimation;
@property(retain, nonatomic) id <FBSProcess> process; // @synthesize process=_process;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

