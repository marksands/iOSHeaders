//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PXCMMComposeRecipientDataSource, PXIDSAddressQueryController;

@interface PXCMMComposeRecipientValidationManager : NSObject
{
    NSMutableDictionary *_composeRecipientsToQuery;
    NSMutableDictionary *_queryAddressesToComposeRecipientQuery;
    PXIDSAddressQueryController *_addressQueryController;
    PXCMMComposeRecipientDataSource *_dataSource;
    id <PXCMMComposeRecipientValidationManagerDelegate> _delegate;
}

+ (id)new;
@property(nonatomic) __weak id <PXCMMComposeRecipientValidationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXCMMComposeRecipientDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_handleAddressQueryResults:(id)arg1 error:(id)arg2;
- (long long)validationTypeForComposeRecipient:(id)arg1;
- (void)_requestValidationForComposeRecipientsAtIndexes:(id)arg1;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end

