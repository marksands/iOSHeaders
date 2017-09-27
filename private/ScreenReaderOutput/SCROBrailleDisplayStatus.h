//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SCROBrailleDisplayStatus : NSObject
{
    int _virtualAlignment;
    NSData *_realData;
    NSData *_virtualData;
    NSData *_aggregatedData;
    long long _masterStatusCellIndex;
}

@property(nonatomic) long long masterStatusCellIndex; // @synthesize masterStatusCellIndex=_masterStatusCellIndex;
@property(nonatomic) int virtualAlignment; // @synthesize virtualAlignment=_virtualAlignment;
@property(retain, nonatomic) NSData *aggregatedData; // @synthesize aggregatedData=_aggregatedData;
@property(retain, nonatomic) NSData *virtualData; // @synthesize virtualData=_virtualData;
@property(retain, nonatomic) NSData *realData; // @synthesize realData=_realData;
- (void).cxx_destruct;

@end

