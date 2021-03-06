//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, CNObservable, NSArray;

@protocol CNUIPRLikenessResolver <NSObject>
+ (id <CNKeyDescriptor>)descriptorForRequiredKeys;
- (id <CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
- (CNObservable *)basicMonogramObservableFromString:(CNObservable *)arg1;
- (CNObservable *)likenessesForContact:(CNContact *)arg1;
- (id <CNCancelable>)resolveLikenessesForContacts:(NSArray *)arg1 withContentHandler:(void (^)(NSArray *))arg2;
@end

