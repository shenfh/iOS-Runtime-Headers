/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@class RMSDAAPRequestManager, RMSFairPlaySession;

@interface RMSDAAPLoginManager : NSObject {
    RMSFairPlaySession *_fairPlaySession;
    RMSDAAPRequestManager *_requestManager;
    bool_isFairPlayRequired;
}

- (void).cxx_destruct;
- (void)_continueFairPlayHandshakeWithData:(id)arg1 completionHandler:(id)arg2;
- (bool)_isFairplayRequiredForServerInfo:(id)arg1;
- (void)_requestControlInterfaceWithCompletionHandler:(id)arg1;
- (void)_requestFairPlayHandshake:(id)arg1;
- (void)_requestLoginWithCompletionHandler:(id)arg1;
- (void)_requestServerInfoWithCompletionHandler:(id)arg1;
- (id)initWithRequestManager:(id)arg1;
- (void)loginWithCompletionHandler:(id)arg1;

@end