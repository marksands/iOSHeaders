//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSTimer;
@protocol IMSendProgressDelegate, IMSendProgressTimeDataSource;

@interface IMSendProgress : NSObject
{
    id <IMSendProgressDelegate> _delegate;
    id _context;
    NSTimer *_sendProgressTimer;
    NSDictionary *_sendingItems;
    float _cachedSendProgress;
    _Bool _wasShowing;
    _Bool _startSendProgressImmediately;
    id <IMSendProgressTimeDataSource> _timeDataSource;
}

+ (Class)_timeDataSourceClass;
@property(retain, nonatomic) id <IMSendProgressTimeDataSource> timeDataSource; // @synthesize timeDataSource=_timeDataSource;
@property(nonatomic) _Bool startSendProgressImmediately; // @synthesize startSendProgressImmediately=_startSendProgressImmediately;
@property(copy, nonatomic) NSDictionary *sendingItems; // @synthesize sendingItems=_sendingItems;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <IMSendProgressDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendProgressTimerFired:(id)arg1;
- (void)_scheduleSendProgressTimerIfNeeded;
- (void)_updateSendProgress;
- (void)_resetSendProgress;
- (_Bool)_hasSendingMessages;
- (void)invalidate;
- (void)updateForItems:(id)arg1 forced:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;
- (id)description;
- (void)dealloc;

@end

