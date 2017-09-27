//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SGMContactDetailExtraction;

@interface SGDetectedAttributeMetrics : NSObject
{
    SGMContactDetailExtraction *_petGenClassInstance;
}

+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_)arg1 fromEntity:(id)arg2;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_)arg1 fromEntity:(id)arg2 foundInSignature:(_Bool)arg3 match:(id)arg4;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_)arg1 fromEntity:(id)arg2 foundInSignature:(_Bool)arg3 detection:(id)arg4;
+ (void)_recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_)arg1 detailType:(struct SGMContactDetailType_)arg2 fromEntity:(id)arg3 foundInSignature:(_Bool)arg4 detailType:(unsigned long long)arg5 detailValue:(id)arg6;
+ (void)_recordExtractionEventFromSource:(struct SGMDocumentType_)arg1 foundInSignature:(_Bool)arg2 detailType:(struct SGMContactDetailType_)arg3 outcome:(struct SGMContactDetailExtractionOutcome_)arg4 foundInSenderCNContact:(_Bool)arg5;
+ (id)instance;
@property(retain, nonatomic) SGMContactDetailExtraction *petGenClassInstance; // @synthesize petGenClassInstance=_petGenClassInstance;
- (void).cxx_destruct;
- (id)init;

@end

