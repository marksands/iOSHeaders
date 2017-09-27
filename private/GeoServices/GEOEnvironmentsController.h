//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface GEOEnvironmentsController : NSObject
{
    NSArray *_defaultEnvironmentInfos;
    NSArray *_environmentInfos;
    NSArray *_customEnvironmentInfos;
    _Bool _enableCustomEnvironments;
    id <GEOEnvironmentsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <GEOEnvironmentsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeCustomEnvironment:(id)arg1;
- (void)addCustomEnvironment:(id)arg1;
- (id)environmentInfosForSection:(long long)arg1;
- (void)reloadEnvironments:(CDUnknownBlockType)arg1;
- (void)reloadEnvironments;
- (void)dealloc;
- (id)initEnablingCustomEnvironments:(_Bool)arg1;

@end

