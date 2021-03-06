//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_ICLexiconSourcing.h"

@class PPContactNameRecordLoadingDelegate, PPContactStore, PPEventNameRecordLoadingDelegate, PPEventStore, PPNamedEntityRecordLoadingDelegate, PPNamedEntityStore, _ICLexiconManager;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing>
{
    _ICLexiconManager *_manager;
    PPContactStore *_contactStore;
    PPContactNameRecordLoadingDelegate *_contactDelegate;
    PPEventStore *_eventStore;
    PPEventNameRecordLoadingDelegate *_eventDelegate;
    PPNamedEntityStore *_namedEntityStore;
    PPNamedEntityRecordLoadingDelegate *_namedEntityDelegate;
}

- (void).cxx_destruct;
- (void)_handleEventRecord:(id)arg1;
- (void)_reloadNamedEntityDataAfterReset;
- (void)_reloadEventDataAfterReset;
- (id)_makeNamedEntityDelegate;
- (id)_makeEventDelegate;
- (id)_makeContactDelegate;
- (void)hibernate;
- (void)warmUp;
- (void)startLoadingWithManager:(id)arg1;
- (id)init;

@end

