//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HFUniqueArrayDiffOptions : NSObject
{
    _Bool _allowMoves;
    CDUnknownBlockType _equalComparator;
    CDUnknownBlockType _hashGenerator;
    CDUnknownBlockType _changeComparator;
}

@property(nonatomic) _Bool allowMoves; // @synthesize allowMoves=_allowMoves;
@property(copy, nonatomic) CDUnknownBlockType changeComparator; // @synthesize changeComparator=_changeComparator;
@property(copy, nonatomic) CDUnknownBlockType hashGenerator; // @synthesize hashGenerator=_hashGenerator;
@property(copy, nonatomic) CDUnknownBlockType equalComparator; // @synthesize equalComparator=_equalComparator;
- (void).cxx_destruct;
- (id)init;

@end

