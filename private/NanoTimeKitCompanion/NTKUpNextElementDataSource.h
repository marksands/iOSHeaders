//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NTKUpNextElementDataSource : NSObject
{
    _Bool _running;
    _Bool _unlockedSinceBoot;
    id <NTKUpNextElementDataSourceDelegate> _delegate;
    unsigned long long _state;
    NSString *_logHeader;
}

+ (id)sampleContentElements;
+ (_Bool)wantsReloadForFirstDeviceUnlock;
+ (_Bool)wantsReloadForSignificantTimeChange;
+ (_Bool)wantsLocationInUseAsserton;
+ (_Bool)wantsAppPrewarm;
+ (id)overrideLocalizedDataSourceName;
+ (id)overrideDataSourceImage;
+ (id)bundleIdentifier;
+ (id)dataSourceClasses;
@property(readonly, nonatomic, getter=hasUnlockedSinceBoot) _Bool unlockedSinceBoot; // @synthesize unlockedSinceBoot=_unlockedSinceBoot;
@property(readonly, nonatomic) NSString *logHeader; // @synthesize logHeader=_logHeader;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) __weak id <NTKUpNextElementDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadLoggingHeader;
- (id)complicationDescriptor;
- (void)setUnlockedSinceBoot:(_Bool)arg1;
- (void)setRunning:(_Bool)arg1;
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;
- (void)resume;
- (void)pause;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

