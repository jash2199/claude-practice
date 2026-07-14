# BW Risk Assessment — Bridgewater-Style Risk Report
**Date: 2026-07-14 (~14:41 ET update — supersedes the 2026-07-14 ~10:41 ET report)**

*Persona: Bridgewater risk desk, radical transparency. Ground truth pulled live via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861) this run.*

---

## Overall Portfolio Risk Grade: **D+** (held, not yet downgraded to F — see warning below)

## Biggest risk right now
**The trade block has now persisted through the entire trading day with zero resolution, and this is the point where "operational failure" starts to become "structural failure."** Per state.md, six consecutive VTI buy attempts today (09:37, 10:37, 11:37, 12:37, 13:37, 14:37 ET) have all been rejected by Robinhood's investor-profile-questionnaire gate — the identical verbatim error every time, five-plus hours since the first notification to Jash. This is happening at the exact moment this book has produced its single best cross-analyst diversification setup ever recorded (GS's #1 conviction pick OMCL + MS's first-ever *agreeing* DCF at ~25% upside + JPM's clean earnings-timing read, all converged since yesterday) — and none of it can be acted on. A risk-management framework that identifies the right trade correctly, six times in a row, and executes it zero times, is not meaningfully different from having no framework at all. **If this account closes today (~16:00 ET) having gone an entire live trading session unable to place a single order despite the clearest setup this book has seen, the grade drops to F on the next report** — not because the analysis was wrong, but because a risk book that cannot act on its own conclusions has no functioning risk-reduction mechanism, period. Underlying concentration and geopolitical tail risk (Iran/Hormuz, still fully live — see below) remain independently critical.

---

## Heat Map Summary

| Risk Category | Level | Notes |
|---|---|---|
| **Execution/operational risk** | 🔴 Critical | Six straight blocked trades today (09:37–14:37 ET), zero resolution, ~5+ hrs since first notification. One check-in left before close. |
| Single-stock concentration | 🔴 Critical | 100% of invested capital in NVDA; unaddressed for 6+ days, unfixable by choice until the blocker clears |
| Sector concentration | 🔴 Critical | 100% of invested sleeve = AI-compute/semiconductors |
| Geopolitical/macro tail risk | 🔴 Critical | Iran ceasefire formally scrapped; US-Iran strikes into a third-plus consecutive day; Brent ~$85, one-month high; Hormuz transits down >50% w/w |
| Correlation risk | 🟠 High | Every semiconductor "diversifier" floated this week (MU, AVGO, SNX, ALAB) shares NVDA's macro/sector exposure |
| Interest rate sensitivity | 🟡 Moderate | Cooler June CPI (3.5% vs 3.8% est.) knocked September hike odds down; still a long-duration growth name with an unclosed ~27% DCF gap |
| Recession/drawdown risk | 🟠 High | Est. 35–50% drawdown on the invested sleeve in a hard risk-off scenario |
| Liquidity risk (market) | 🟢 Low | NVDA is among the most liquid equities on earth; $5.27 position has zero market-impact risk |
| Liquidity risk (account-level) | 🔴 Critical | The account cannot execute *any* order, buy or sell, right now — distinct from and worse than market liquidity risk |
| Idle cash / opportunity risk | 🟡 Moderate → largely moot | 94.7% of the trading book in cash, but currently involuntary, not a discipline failure |
| Currency/FX risk | 🟢 Low (direct) / 🟡 Moderate (indirect) | USD account; indirect exposure via NVDA's Taiwan (TSMC) fabrication dependency and ~$0 China DC revenue |
| Position sizing discipline | 🟢 Low | Absolute dollar risk trivial ($5.27 of $100.27); the risk here is structural, not size-driven |

---

## 1. Ground-truth portfolio snapshot (live, this run)

- **Total account value**: $100.267 (`get_portfolio`: cash $95.00 + NVDA equity $5.267)
- **Position** (`get_equity_positions`): NVDA, 0.024826 sh, avg cost $201.40
- **Live NVDA quote**: $212.145 (bid/ask $212.13/$212.15), vs. Monday's $203.53 close (+4.24% today) → **+5.35% unrealized** vs. $201.40 cost basis — a new high-water mark for the position, sixth straight up-check today per state.md
- **Trading-book accounting** (per ground rules: $50 base + profits, $50 reserve untouchable): deployed $5.267 (NVDA), deployable cash ~$44.733, reserve $50.00 untouchable
- **Trades today**: zero executed. Six VTI buy attempts (09:37 through 14:37 ET) all rejected pre-execution by the same investor-profile gate. No funds moved at any point.
- **OMCL live check** (per standing discipline — verify live, never size off a report price): $45.95 (bid/ask $45.88/$46.03), down ~1.6% from Monday's $46.68 close — the multi-day decoupling streak has now paused for a second consecutive check, though this is a minor data point, not a thesis change (GS attributes prior dips to sector-rotation noise, not company news).

## 2. Correlation analysis between holdings
Still exactly **one** holding — the account's return series is NVDA's return series, scaled to ~5.3% of total capital. Nothing has structurally changed since the last two reports except that the fix (OMCL, or a core ETF) has now been correctly identified and blocked from execution for a full trading session. Every alternative floated by GS this week (MU, AVGO, SNX, ALAB, and now CRWD as a partial answer) either shares NVDA's sector beta or — in CRWD's case — is unvetted and richly priced (188x trailing non-GAAP P/E). **Correlation risk will not improve until (a) the trade block clears and (b) an order for a genuinely non-semiconductor name actually executes.**

## 3. Sector concentration risk
- **Invested sleeve**: 100% Technology/Semiconductors (AI-compute) — NVDA
- **As % of total account**: ~5.25%
- **As % of the ~$50 trading book**: ~10.5% deployed, ~89.5% cash
- Fifth consecutive BW cycle flagging 100% single-sector concentration as unresolved. BR's IPS targets 55%/35%/10% core/satellite/cash; live book is 0% core / ~10.5% satellite (all NVDA) / ~89.5% cash.

## 4. Geographic exposure and currency risk
- **Direct FX**: none — USD-denominated account and holding.
- **Indirect / supply-chain geography**: NVDA fabrication concentrated at TSMC in Taiwan — the standing Taiwan Strait tail risk remains unpriced and unhedged.
- **China revenue**: NVDA's China data-center revenue has gone from ~$4.6B/year run-rate to effectively $0 under current export restrictions (per MS's DCF); this run adds a fresh incremental data point — NVDA is reportedly tightening its Asian AI-chip "white list," excluding roughly half its prior neo-cloud/reseller customer base, a further narrowing at the margin.
- **Middle East/Gulf exposure, still live, still worsening**: fresh WebSearch this run confirms Brent hit a **one-month high (~$84.95–86, +1.98–3.8% intraday)** on a third consecutive day of US-Iran strikes; Hormuz transits over the weekend fell >50% week-over-week (57 transits Fri–Sun vs. the ~130+ normal pace). One partial de-escalatory data point: Trump dropped the proposed 20%-of-cargo-value Strait "toll," replacing it with Gulf-state trade/investment deals — but this eases a policy mechanism, not the underlying military conflict, which remains active. The account still has zero exposure that would *benefit from* (rather than merely avoid) this shock.

## 5. Interest rate sensitivity
NVDA is a long-duration growth asset — DCF-implied value (MS: ~$150.6 base case vs. ~$212.15 spot, now a wider ~29% downside gap since NVDA has run up further while the model is unchanged). Cooler June CPI (3.5% vs. 3.8% consensus) knocked September hike odds down from ~75% to ~63% as of the last confirmed read — a real, if partial, offset to BR's hawkish-Fed framing (3x 25bp hikes priced by BofA as of 7/13). This is a rate-sensitivity nuance, not a valuation green light: the DCF gap on NVDA hasn't closed, it's widened intraday as the stock keeps climbing on sentiment rather than any fundamental re-rating.

## 6. Recession stress test
Applying BR's IPS-level stress assumption (35–50% peak-to-trough drawdown in a bad year for a tech/AI-tilted book) to the invested sleeve, off today's higher NVDA mark:
- **Base recession scenario** (multiple compression, AI-capex digestion pause): NVDA -35% to -45% from ~$212.15 → **$116.68–$137.89/share**, i.e., the $5.267 NVDA position would fall to roughly **$2.89–$3.42**, a **$1.83–$2.38 loss** on the position.
- **Severe/tail scenario** (recession + confirmed Taiwan/supply-chain disruption, or a Gulf-conflict energy/inflation shock compounding a Fed that can't cut): 50%+ drawdown plausible — down to roughly **$106–$145/share**.
- **On the total account**: because ~94.7% of the account is cash, a full NVDA wipeout to zero would cost ~5.3% of total account value. **The account's recession resilience continues to come entirely from the accident of being mostly in cash — cash that today is forced, not chosen. That distinction is not a point in the book's favor: it means the "protection" would evaporate immediately the day the account starts deploying at anything like its intended pace, unless a genuinely different risk profile is built alongside the cash getting deployed.**

## 7. Liquidity risk rating (per holding)
| Holding | Market liquidity | Account-level liquidity | Notes |
|---|---|---|---|
| NVDA | 🟢 Very Low risk | 🔴 Critical | Deep, liquid market for the security itself — the *account* cannot place a sell order any more than a buy order right now; a trader who wanted to trim NVDA on a fresh negative catalyst today could not have |
| Cash ($95.00) | 🟢 No risk | 🔴 Critical | Fully liquid in principle, cannot be deployed into any equity order right now |

## 8. Single stock risk and position sizing recommendations
- Current NVDA position ($5.267) is ~10.5% of the trading book — comfortably inside BR's 20% soft cap. Sizing discipline on the existing position remains fine; this has never been a sizing problem.
- **Unchanged recommendation, sixth consecutive cycle, still blocked in practice**: the next dollar deployed should not go to NVDA, MU, AVGO, SNX, ALAB, or CRWD — all either share the book's sector-correlation/macro exposure or are too fresh/expensive to size (CRWD: unvetted, 188x trailing P/E, already +11% this week). It should go to OMCL (the best-evidenced diversifier this book has ever produced) or a core ETF (VTI/SCHG/QQQM per BR's IPS) — **the moment the Robinhood investor-profile blocker clears.** Until then this recommendation is correct and inert, which is exactly the problem stated at the top of this report.

## 9. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact on invested sleeve |
|---|---|---|
| Hormuz conflict escalates further (sustained closure, oil >$100, broad equity risk-off) | ~15-20% | -30% to -50% on NVDA via multiple compression; broader account impact limited by cash weighting |
| Hormuz conflict de-escalates within 1-2 weeks | ~40-45% (trimmed slightly again — three-plus consecutive days of active strikes with no session-long ceasefire is a longer active window than prior cycles priced in) | Modest relief rally in semis; NVDA likely recovers toward pre-shock levels |
| AI-capex digestion / hyperscaler spending pause (demand-side, independent of geopolitics) | ~10-15% over 3-6 months | -30%+ on NVDA, potentially larger and more durable than a geopolitical shock |
| Taiwan Strait incident (fab disruption) | <5% (low-probability, high-severity) | Potentially -50%+ and durable, given NVDA's TSMC dependency — genuinely uninsurable with the current equities-only toolbox |
| Trade-block extends past today's close (updated) | ~50-60% given zero resolution across six checks today and no visibility into Jash's timeline | Not a market-risk scenario — a near-certainty of at least a full missed trading session on this book's best-ever diversification setup. Compounds every day it persists. |
| Status quo grind (no clean resolution, no fresh escalation) | ~25-30% | Continued sideways-to-mixed drift in the broader tape; NVDA specifically has decoupled upward from the risk-off macro narrative today |

## 10. Hedging strategies (equities-only toolbox — top 3 risks)
No options available, and the same second hard constraint from the last report still applies: **no trades of any kind are currently executable**, so every hedge below is a plan to execute the moment the blocker clears, not something actionable today.

1. **Execution/operational risk (still the #1 risk)** → not an equities hedge — the only fix is Jash completing the Robinhood investor-profile questionnaire (link is in state.md's ACTIVE BLOCKER section). This is the single highest-leverage action available to reduce the book's risk right now, and it sits entirely outside this routine's toolbox. Radical transparency requires saying this plainly rather than repeating the OMCL recommendation as if repetition were progress.
2. **Single-stock/sector concentration** → once trading resumes, deploy a portion of the ~$44.73 deployable cash into OMCL and/or a broad index ETF (VTI/QQQM per BR's IPS). Not a perfect hedge (still long-only, still equity-beta), but the only lever available, and it has now sat both undeployed *and* undeployable through an entire trading session.
3. **Geopolitical shock risk** → if inverse or defensive-sector ETFs are tradable on this account, or long energy/defense names that benefit from continued Gulf tension, a small tactical allocation would let the book benefit from, not merely avoid, continued escalation. GS's OXY idea remains the candidate on the table but is still unvetted by MS's DCF or this desk's framework — don't size it off one screener's conviction alone once trading resumes.

## 11. Rebalancing suggestions with allocation percentages
Endorsing BR's IPS target (55% core / 35% satellite / 10% cash on the trading book) as the correct compass, unchanged. None of the three falsifiable OMCL triggers set 7/13 (ceasefire holding a full session / Brent <~$75 / Friday 7/17 time-box) have fired as of this run — ceasefire formally scrapped, not holding; Brent at a one-month high, further from $75 than at any prior check today; time-box not yet reached. But as flagged since the 10:41 ET report, **the triggers are not the binding constraint right now — the Robinhood block is**, and that fact should not get lost every time this section restates the trigger framework. Once both (a) a trigger fires or a genuine tactical case is made, and (b) the block clears, this desk's standing suggestion is unchanged: deploy $8-10 into OMCL, leaving ~$35-37 deployable cash, taking the invested sleeve from 100% single-name to a still-concentrated-but-materially-better ~2-name book.

---

## Cross-analyst notes
- **GS (7/14 afternoon)**: aligned on OMCL as the cleanest actionable diversifier, now with a structural sector-rotation narrative layered on top; also flagged CRWD as a new, uncorrelated idea, but at 188x trailing P/E it trades every bit as much on multiple as OMCL does on fundamentals — this desk would not treat "uncorrelated" and "safe to size" as synonyms for CRWD given the valuation risk score GS itself assigned (8/10).
- **MS's DCF (7/14)**: unchanged — NVDA still ~27-29% overvalued (gap has widened intraday as price has run further with no model change); OMCL's first-ever agreeing DCF (~25% upside) remains the strongest cross-analyst consensus this book has produced. Neither changes anything about whether the account can currently trade.
- **JPM**: confirms OMCL clean of earnings risk until 7/30; NVDA carries no near-term binary earnings risk (next print 8/26). Nothing here is earnings-event-driven risk right now — it's concentration, macro, and operational risk, in that order of controllability (least to most).
- **BR's IPS**: still the most-cited unimplemented recommendation in this book's history. This desk's read stands from the last report: the gap between "recommended" and "executed" is no longer a discretionary discipline question, it's a broker-side compliance gate outside the trader's control — but six blocked attempts across a full session is a materially worse data point than two, and if this closes the day unresolved, the next report needs to treat it as a structural failure of the experiment's plumbing, not a footnote.

---

Sources:
- [Oil prices hit 1-month high as US-Iran attacks dim Strait of Hormuz outlook (Al Jazeera)](https://www.aljazeera.com/economy/2026/7/14/oil-hits-1-month-high-as-us-iran-fighting-clouds-strait-of-hormuz-outlook)
- [Oil prices off highs after Trump abandons 20% protection fee on Strait of Hormuz traffic (CNBC)](https://www.cnbc.com/2026/07/14/oil-prices-today-brent-wti-hormuz-trump-toll-iran.html)
