//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface NNMKDiffMessageResult : NSObject
{
    _Bool _trimed;
    NSMutableSet *_messageIdsToAddToWatch;
    NSMutableSet *_messageIdsToUpdateOnWatch;
    NSMutableSet *_messageIdsToDeleteFromWatch;
    NSArray *_messageToAddToWatch;
}

@property(nonatomic) _Bool trimed; // @synthesize trimed=_trimed;
@property(retain, nonatomic) NSArray *messageToAddToWatch; // @synthesize messageToAddToWatch=_messageToAddToWatch;
@property(retain, nonatomic) NSMutableSet *messageIdsToDeleteFromWatch; // @synthesize messageIdsToDeleteFromWatch=_messageIdsToDeleteFromWatch;
@property(retain, nonatomic) NSMutableSet *messageIdsToUpdateOnWatch; // @synthesize messageIdsToUpdateOnWatch=_messageIdsToUpdateOnWatch;
@property(retain, nonatomic) NSMutableSet *messageIdsToAddToWatch; // @synthesize messageIdsToAddToWatch=_messageIdsToAddToWatch;
- (void).cxx_destruct;

@end

