//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRRecentContactsLibrary;

__attribute__((visibility("hidden")))
@interface CNReputationCoreRecentsAdapter : NSObject
{
    CRRecentContactsLibrary *_library;
}

@property(readonly, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)recentContactsForHandle:(id)arg1;
- (id)initWithRecentContactsLibrary:(id)arg1;
- (id)init;

@end

