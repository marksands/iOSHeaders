//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSKChangeRecord : NSObject
{
    int mKind;
    id mDetails;
}

+ (id)changeRecordWithKind:(int)arg1 details:(id)arg2;
@property(readonly, nonatomic) id details; // @synthesize details=mDetails;
@property(readonly, nonatomic) int kind; // @synthesize kind=mKind;
@property(readonly, nonatomic) _Bool allowedInCommit;
- (void)dealloc;
- (id)initWithKind:(int)arg1 details:(id)arg2;

@end

