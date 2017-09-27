//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactsLoggerProvider.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider>
{
    id <CNContactsLogger> _contactsLogger;
    id <CNSpotlightIndexingLogger> _spotlightIndexingLogger;
    id <CNRegulatoryLogger> _regulatoryLogger;
}

+ (id)loggerProvider;
@property(retain, nonatomic) id <CNRegulatoryLogger> regulatoryLogger; // @synthesize regulatoryLogger=_regulatoryLogger;
@property(retain, nonatomic) id <CNSpotlightIndexingLogger> spotlightIndexingLogger; // @synthesize spotlightIndexingLogger=_spotlightIndexingLogger;
@property(retain, nonatomic) id <CNContactsLogger> contactsLogger; // @synthesize contactsLogger=_contactsLogger;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

