//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface NNMKMailboxSelectionChanges : NSObject
{
    NSArray *_mailboxesToUpdate;
    NSArray *_mailboxesToReSync;
    NSArray *_mailboxesToDisableSync;
}

@property(retain, nonatomic) NSArray *mailboxesToDisableSync; // @synthesize mailboxesToDisableSync=_mailboxesToDisableSync;
@property(retain, nonatomic) NSArray *mailboxesToReSync; // @synthesize mailboxesToReSync=_mailboxesToReSync;
@property(retain, nonatomic) NSArray *mailboxesToUpdate; // @synthesize mailboxesToUpdate=_mailboxesToUpdate;
- (void).cxx_destruct;

@end

