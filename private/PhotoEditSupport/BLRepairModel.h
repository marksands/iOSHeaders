//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLRepairLayerStack, NSDictionary, NSLock;

@interface BLRepairModel : NSObject
{
    NSDictionary *_strokesDataDictionary;
    BLRepairLayerStack *_layerStack;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (id)imagePatchList;
- (_Bool)hasLayerStack;
- (id)layerStack;
- (void)setLayerStack:(id)arg1;
- (void)buildLayerStackWithAnalysisImage:(id)arg1 andRepairImage:(id)arg2;
- (_Bool)hasRedeye;
- (_Bool)hasRepair;
- (_Bool)hasRepairOrRedeye;
- (id)initWithAdjustmentsDictionary:(id)arg1;

@end

