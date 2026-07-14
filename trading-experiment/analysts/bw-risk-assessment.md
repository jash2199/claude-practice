# BW Risk Assessment — Bridgewater-Style Risk Report
**Date: 2026-07-14 (~10:41 ET update — supersedes the 2026-07-13 ~15:xx ET report)**

*Persona: Bridgewater risk desk, radical transparency. Ground truth pulled live via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861) this run.*

---

## Overall Portfolio Risk Grade: **D+** (downgraded from C-)

## Biggest risk right now
**The book's #1 flagged risk — single-name/single-sector concentration — is no longer just "unaddressed," it is now mechanically unfixable.** Robinhood is rejecting every attempted trade on this account (two blocked VTI buys today, 09:37 and 10:37 ET, both killed by an investor-profile-questionnaire compliance gate per state.md's ACTIVE BLOCKER) pending action from Jash on a link outside this routine's control. That lands at the exact moment cross-analyst consensus on the diversification trade (OMCL) is the strongest it has ever been — MS's first-ever DCF on OMCL agrees with GS's long-standing #1 pick (~25% upside), GS layered on a sourced sector-rotation tailwind, JPM confirms it's clean of earnings risk until 7/30 — and it doesn't matter, because **no order can execute regardless of what the analysis says.** This downgrades the grade from "correct discipline, slow to convert" to "discipline that has been overtaken by an operational failure the trader cannot trade around." Concentration risk and geopolitical/macro tail risk (Iran/Hormuz, still live) remain critical in their own right, but this cycle's escalation is that the account's only real risk-reduction lever — deploying idle cash into a genuine diversifier — is currently broken at the plumbing level, not the strategy level.

---

## Heat Map Summary

| Risk Category | Level | Notes |
|---|---|---|
| **Execution/operational risk (NEW)** | 🔴 Critical | Robinhood blocking all trades pending investor-profile questionnaire; account cannot act on its own best-ever diversification setup even if it wanted to |
| Single-stock concentration | 🔴 Critical | 100% of invested capital in NVDA; unaddressed for 5+ days, and now unfixable even by choice until the blocker clears |
| Sector concentration | 🔴 Critical | 100% of invested sleeve = AI-compute/semiconductors, still the most volatile sector on the tape this week |
| Geopolitical/macro tail risk | 🔴 Critical | Iran ceasefire formally declared over by Trump; Brent/WTI both up sharply from pre-week levels; US struck 80+ targets in Iran overnight; still live and unresolved |
| Correlation risk | 🟠 High | One holding = the account's fate is NVDA's fate; every semiconductor "diversifier" analysts have floated (MU, AVGO, SNX, ALAB) shares the same macro/sector exposure |
| Interest rate sensitivity | 🟡 Moderate (improved) | June CPI printed cooler (3.5% vs. 3.8% est.); September hike odds fell 75%→63% per CME FedWatch — a genuine, if partial, offset to the hawkish-Fed thesis flagged last cycle. Still a long-duration growth name; downgrade from High is provisional on one data point |
| Recession/drawdown risk | 🟠 High | Est. 35-50% drawdown on the invested sleeve in a hard risk-off scenario (see stress test) |
| Liquidity risk (market) | 🟢 Low | NVDA is one of the most liquid equities on earth; $5.13 position has zero market-impact/execution risk |
| Liquidity risk (account-level, NEW) | 🔴 Critical | Distinct from market liquidity: the account itself cannot execute *any* order right now, buy or sell, due to the compliance block — a different and more acute kind of liquidity risk than "can I get a fair price," it's "can I trade at all" |
| Idle cash / opportunity risk | 🟡 Moderate → arguably moot | 94.9% of the trading book sitting in cash for 5+ days would normally be a discipline flag, but with the account unable to place orders, "idle cash" is currently involuntary, not a standing choice |
| Currency/FX risk | 🟢 Low (direct) / 🟡 Moderate (indirect) | USD-denominated account; indirect exposure via NVDA's Taiwan (TSMC) fabrication dependency and ~$0 China DC revenue under current export controls |
| Position sizing discipline | 🟢 Low | Absolute dollar risk trivial ($5.13 of $100.13); the risk here is structural/operational, not size-driven |

---

## 1. Ground-truth portfolio snapshot (live, this run)

- **Total account value**: $100.13 (`get_portfolio`: cash $95.00 + NVDA equity $5.125)
- **Position** (`get_equity_positions`): NVDA, 0.024826 sh, avg cost $201.40
- **Live NVDA quote**: $206.41 (bid/ask $206.43/$206.46), vs. Monday's $203.53 close (+1.4% today) → **+2.49% unrealized** on the position vs. $201.40 cost basis
- **Trading-book accounting** (per ground rules: $50 base + profits, $50 reserve untouchable): deployed $5.125 (NVDA), deployable cash ~$44.875, reserve $50.00 untouchable
- **Trades today**: zero executed. Two VTI buy attempts (09:37, 10:37 ET) both rejected pre-execution by Robinhood's investor-profile gate — see ACTIVE BLOCKER in state.md. No funds moved either time.

## 2. Correlation analysis between holdings
Still exactly **one** holding — the account's return series is NVDA's return series, scaled to ~5% of total capital. Nothing has changed on this front since last cycle except that the plausible fix (OMCL) is now blocked at the execution layer rather than merely deferred by discretion. Every other candidate analysts have floated this week (MU, AVGO, SNX, ALAB) remains a same-sector, same-macro-driver name — adding any of them would cut single-name risk without touching correlation risk. **Correlation risk will not improve until (a) the trade block clears and (b) a genuinely non-semiconductor name is actually purchased.**

## 3. Sector concentration risk
- **Invested sleeve**: 100% Technology / Semiconductors (AI-compute) — NVDA
- **As % of total account**: ~5.1%
- **As % of the ~$50 trading book**: ~10.3% deployed, ~89.7% cash
- Fourth consecutive BW cycle flagging 100% single-sector concentration as unresolved. BR's IPS targets 55%/35%/10% core/satellite/cash; live book is 0% core / ~10% satellite (all NVDA) / ~90% cash.

## 4. Geographic exposure and currency risk
- **Direct FX**: none — USD-denominated account and holding.
- **Indirect / supply-chain geography**: NVDA fabrication concentrated at TSMC in Taiwan — the standing Taiwan Strait tail risk remains unpriced and unhedged.
- **China revenue**: per MS's DCF, NVDA's China data-center revenue has gone from ~$4.6B/year run-rate to effectively $0 under current export restrictions — a downside break already partially realized, not hypothetical.
- **Middle East/Gulf exposure, still live and worse**: Trump declared the Iran ceasefire formally over; US struck 80+ targets in Iran overnight (air defense, command/control, radar, anti-ship capability); Brent/WTI both trading well above pre-week levels. The account still has zero exposure that would *benefit from* (rather than merely avoid) this shock — no energy/defense names to offset a Gulf-crisis drawdown in tech. GS's OXY idea remains unvetted by this desk's framework (see §9/§10).

## 5. Interest rate sensitivity
NVDA is a long-duration growth asset — DCF-implied value (MS: ~$150.6 base case vs. ~$206.41 spot, ~27% downside gap, unchanged from 7/13) is highly sensitive to the discount rate. **One incremental positive this cycle**: June CPI printed cooler than expected (3.5% vs. 3.8% consensus), and September hike odds fell from ~75% to ~63% per CME FedWatch — a real, if single-data-point, offset to BR's 7/13 hawkish-Fed framing (3x 25bp hikes priced by BofA, PCE projection raised to 3.6%). Downgrading this line from High to Moderate provisionally — one cooler print doesn't reverse a policy pivot, and the underlying DCF gap on NVDA hasn't closed at all (still ~27% overvalued), so this is a rate-sensitivity nuance, not a valuation green light.

## 6. Recession stress test
Applying BR's IPS-level stress assumption (35-50% peak-to-trough drawdown in a bad year for a tech/AI-tilted book) to the invested sleeve:
- **Base recession scenario** (multiple compression, AI capex digestion pause): NVDA -35% to -45% from ~$206.41 → **$113.50-$134.17/share**, i.e., the $5.125 NVDA position would fall to roughly **$2.82-$3.33**, a **$1.79-$2.30 loss** on the position.
- **Severe/tail scenario** (recession + confirmed Taiwan/supply-chain disruption, or a Gulf-conflict energy/inflation shock compounding a Fed that can't cut): 50%+ drawdown plausible — down to roughly **$103-$140/share**.
- **On the total account**: because 94.9% of the account is cash, a full NVDA wipeout to zero would cost ~5% of total account value. **The account's recession resilience continues to come entirely from the accident of being mostly in cash — now doubly so, since the cash isn't even a discretionary defensive choice this cycle, it's a forced position because trades are blocked.** That distinction still matters: it will not protect the book once capital scales up under the current concentration pattern, and it is not evidence of deliberate risk management.

## 7. Liquidity risk rating (per holding)
| Holding | Market liquidity | Account-level liquidity | Notes |
|---|---|---|---|
| NVDA | 🟢 Very Low risk | 🔴 Critical (NEW) | Deep, liquid market for the security itself — but the *account* cannot currently place a sell order any more than a buy order; the compliance block is symmetric, not just a "can't add" restriction |
| Cash ($95.00) | 🟢 No risk | 🔴 Critical (NEW) | Fully liquid in principle, but cannot be deployed into any equity order right now |

This is the first cycle this desk has needed to split "market liquidity" from "account-level liquidity." They have historically moved together at this account's size; today they don't. A trader who wanted to trim NVDA on a fresh negative catalyst right now could not — that's worth stating plainly even though nothing currently calls for a sale.

## 8. Single stock risk and position sizing recommendations
- Current NVDA position ($5.125) is ~10.3% of the trading book — inside BR's 20% soft cap. Sizing discipline on the existing position remains fine; this was never a sizing problem.
- **The recommendation is unchanged in substance for the fifth consecutive cycle and remains blocked in practice**: the next dollar deployed should not go to NVDA, MU, AVGO, SNX, or ALAB — all share the book's existing sector-correlation and macro-shock exposure. It should go to OMCL (now the best-evidenced diversifier this book has ever had — GS conviction + MS DCF agreement + JPM's clean earnings-timing read, all converging simultaneously) or a core ETF (VTI/SCHG/QQQM per BR's IPS) — **the moment the Robinhood investor-profile blocker clears.** Until then, this recommendation is correct but inert.

## 9. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact on invested sleeve |
|---|---|---|
| Hormuz conflict escalates further (sustained closure, oil >$100, broad equity risk-off) | ~15-20% | -30% to -50% on NVDA via multiple compression; broader account impact limited by cash weighting |
| Hormuz conflict de-escalates within 1-2 weeks (plausible base case given historical precedent for these flare-ups) | ~45-50% (trimmed slightly from last cycle's 50-55% given the ceasefire's formal collapse today) | Modest relief rally in semis; NVDA likely recovers toward pre-shock levels |
| AI-capex digestion / hyperscaler spending pause (MS's flagged "downside break," independent of geopolitics) | ~10-15% over 3-6 months | -30%+ on NVDA, potentially larger and more durable than a geopolitical shock since it hits the demand thesis directly |
| Taiwan Strait incident (fab disruption) | <5% (low-probability, high-severity) | Potentially -50%+ and durable, given NVDA's TSMC dependency — genuinely uninsurable with the current equities-only toolbox |
| Trade-block extends indefinitely (NEW) | Unquantifiable without visibility into Jash's timeline, but currently 100% (still active as of this run) | Not a market-risk scenario — a certainty until resolved. Impact: the book remains forced into its worst-ever-flagged risk structure regardless of what analysis says, for as long as this persists |
| Status quo grind (no clean resolution, no fresh escalation) | ~25-30% | Continued sideways-to-mixed drift, consistent with today's tape (Dow -0.3%, S&P +0.2%, Nasdaq +0.5% on the cooler-CPI bounce) |

## 10. Hedging strategies (equities-only toolbox — top 3 risks)
No options available, and this cycle adds a second hard constraint: **no trades of any kind are currently executable**, so every hedge below is a plan to execute the moment the blocker clears, not something actionable today.

1. **Execution/operational risk (the new #1)** → not an equities hedge at all — the only fix is Jash completing the Robinhood investor-profile questionnaire. This desk is flagging it here because it is currently the single highest-leverage action available to reduce the book's risk, and it sits entirely outside this routine's toolbox. Radical transparency requires saying so plainly rather than only restating the OMCL recommendation as if it were actionable.
2. **Single-stock/sector concentration** → once trading resumes, deploy a portion of the ~$44.88 deployable cash into OMCL and/or a broad index ETF (VTI/QQQM per BR's IPS). Not a perfect hedge (still long-only, still equity-beta), but the only lever available, and it has now been sitting both undeployed *and* undeployable for multiple days running.
3. **Geopolitical shock risk** → if inverse or defensive-sector ETFs are tradable on this account (broad market inverse funds, or long energy/defense names that benefit from continued Gulf tension), a small tactical allocation would let the book benefit from, not merely avoid, a continued escalation. GS's OXY idea is the candidate on the table but remains unvetted by MS's DCF or this desk's framework — don't size it off one screener's conviction alone once trading resumes.

## 11. Rebalancing suggestions with allocation percentages
Endorsing BR's IPS target (55% core / 35% satellite / 10% cash on the trading book) as the correct compass, unchanged. This cycle's honest addition: **the falsifiable-trigger framework this desk endorsed on 7/13 (ceasefire holding a session / Brent <~$75 / Friday 7/17 time-box) is sound, but it now has a precondition nobody had written down until this run — the account has to actually be able to trade.** None of the three triggers have fired as of this run (ceasefire formally scrapped, not holding; Brent still well above $75; time-box not yet reached), so the triggers themselves aren't the binding constraint today — the Robinhood block is. Once both (a) a trigger fires or a genuine tactical case is made, and (b) the block clears, this desk's standing suggestion is unchanged: deploy $8-10 into OMCL, leaving ~$35-37 deployable cash, taking the invested sleeve from 100% single-name to a still-concentrated-but-materially-better ~2-name book.

---

## Cross-analyst notes
- **GS (7/14 mid-morning)**: aligned on OMCL as the cleanest actionable diversifier, now backed by a structural sector-rotation narrative (Bloomberg/Russell rebalancing) on top of the decoupling case. No disagreement to flag; this desk's only addition is that "actionable" is currently theoretical given the trade block.
- **MS's DCF (7/14)**: the most consequential cross-analyst development this book has seen — MS's first-ever full OMCL build agrees with GS's conviction (~25% upside), a reversal of the MU precedent where MS's DCF rebutted GS's top idea. This materially strengthens the case for OMCL as the diversifier once execution is possible; it does not change anything about NVDA (still ~27% overvalued, unchanged) or about whether the account can currently place an order.
- **JPM**: confirms OMCL clean of earnings risk until 7/30, and NVDA carries no near-term binary earnings risk (next print 8/26) — nothing here is earnings-event-driven risk right now; it's concentration, macro, and now operational risk.
- **BR's IPS**: remains the most-cited unimplemented recommendation in this book's history. This desk's honest read this cycle: the reason it's unimplemented today is no longer purely a discretionary "wait for the macro dust to settle" call (BR's own framing distinguishes core-ETF buys as a separate decision track from the single-name geopolitical veto, and the trader tried to act on exactly that distinction this morning) — it's that the trade was attempted, was reasoned correctly, and was rejected by the broker for an unrelated compliance reason. That's a meaningfully different, and more urgent, kind of gap than "the discipline hasn't converted to action yet." Flagging it as such rather than repeating the same concentration warning a fifth time with no new information.
