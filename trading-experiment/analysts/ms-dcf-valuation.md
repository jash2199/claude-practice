# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-20 (Monday, ~17:00 ET, first update since 7/17 close)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS — all four current holdings per state.md. GS's current #1 pick (analysts/gs-stock-screener.md, 2026-07-20) is still **OMCL**, already a live holding and covered under (2) — no new name to add this cycle. No material change to either full model since 7/17 (confirmed via fresh WebSearch on both names below), so per standing practice this is a numbers refresh off today's live Robinhood-quoted prices (state.md, ~15:36 ET check-in), not a rebuild.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $202.99 (7/20, ~15:36 ET trader-recorded live quote) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~25.8% downside to DCF fair value.** Gap widened back out slightly from 7/17's ~24.9% as price recovered a couple of points off Friday's selloff low. |
| **OMCL** | $45.05 (7/20, ~15:36 ET trader-recorded live quote) | ~$56.35 (WACC 9%, g 3%) — unchanged model | **MODESTLY UNDERVALUED — ~25.1% upside to DCF fair value.** Margin of safety widened further from 7/17's ~20.7%, purely on the name's fourth straight red session (own words, GS/BW 7/20) — no change to the underlying cash-flow build. |
| **VTI** | $366.60 (7/20, ~15:36 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged from prior reports. |
| **VXUS** | $83.095 (7/20, ~15:36 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged from prior reports. |

**Bottom line for the trader:** No verdict changes and no model rebuilds this run — WebSearch on both single-name holdings turned up nothing that moves a 5-year cash-flow assumption (NVDA: tightened export-compliance "whitelisting" of Asian resellers is a known, already-discounted risk vector, not new economics; OMCL: Q2 guidance of $1.80-2.00 adj. EPS / $1,215-1,255M revenue was already raised back in the Q1 print and is unchanged today). The only thing that moved is price, and it moved in opposite directions for the book's two DCF-relevant names: NVDA got a bit more expensive relative to fair value on today's chip-sector bounce, OMCL got a bit cheaper on its own continuing, still-unexplained pre-earnings slide. Neither move clears this desk's bar to revisit sizing — NVDA remains a hard no-add, and OMCL's widening discount is a valuation tailwind for a *future* second tranche, not a reason to add today given the binary 7/30 print now 10 days out (see GS's/JPM's -20%/+15% tail framing, echoed below).

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/17
Price recovered from $200.48 (7/17, 09:36 ET) to $202.99 (7/20, ~15:36 ET) — a modest ~1.25% bounce, tracking the broad chip-sector relief rally that took SOX +2.3% and MU +4.8-5.1% intraday today (per GS's 7/20 report) after last week's worst chip-sector week in over a year. That bounce faded somewhat into the afternoon (NVDA was +0.64% at the 14:35 ET check, down to +0.09% by 15:36 per state.md). WebSearch found nothing today that changes the cash-flow build: NVIDIA tightened its export-compliance "whitelist" process for Asian resellers on 7/14 (over half of past customers reportedly failed re-evaluation) — a real operational tightening, but it's a compliance-cost/addressable-market friction on an already-modeled China-export headwind, not a new data point requiring a re-forecast of FY2027E-FY2031E revenue or margins. No Blackwell-Rubin execution news, no new export-rule text, no earnings (next print still 8/26, outside any near-term binary window). No change to WACC or terminal growth assumptions.

### Verdict: **OVERVALUED, gap widening back out on price alone**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $202.99 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~25.8% downside** from $202.99 — the gap widened for the first time in four sessions (28.9% on 7/15 → 27.7% on 7/16 → 24.9% on 7/17 → 25.8% today), entirely a function of today's sector-wide relief bounce, not any change to the model. Worth flagging explicitly: even the base-case fair value cell ($202.2, WACC 9%/g 3%) sits right at today's spot price, meaning only the most aggressive corner of the sensitivity grid (lower discount rate, higher terminal growth) would justify today's price — the grid has not materially shifted in NVDA's favor. Key breakable assumptions unchanged (margin durability is the upside break; China export policy — now with a tangible tightening event to point to — Blackwell-Rubin execution, and HBM supply bottleneck remain the downside breaks; full writeup via git history, 7/10 report). **Still a hold-for-other-reasons position, not an add**, and today's sector-wide (not NVDA-specific) bounce doesn't clear the "fresh catalyst" bar to revisit the existing position either way.

---

## 2. Omnicell (OMCL) — brief update, model unchanged

### What changed since 7/17
Price fell from $46.68 (7/17 execution) to $45.05 (7/20, ~15:36 ET) — a further ~3.5% slide, now OMCL's **fourth straight red session** (Thu pre-entry -1.51%, Fri entry-day -2.66%, Mon -1.79% by the 15:36 check), and notably still decoupled from today's rallying chip sector (SOX +2.3%, MU +4.8-5.1%) — ruling out a simple "OMCL has hidden chip beta" explanation, per both this desk's and GS's/BW's independent 7/20 reads. WebSearch confirms no new fundamental driver: Q2 2026 earnings remain set for 7/30 before the open; the $1.80-2.00 adjusted-EPS / $1,215-1,255M revenue guidance was raised back at the Q1 print (already built into this desk's model) and is unchanged today. Third-party sell-side commentary (unrelated to this desk's own build) has nudged consensus fair-value estimates from ~$51.50 to ~$57.43 on product-cycle/cabinet-refresh optimism — directionally consistent with, though not the basis for, this desk's own ~$56.35 base case. **Data-quality note, still recurring**: WebSearch continues to surface a stale $43.01 print for this name (now into its second full week unflagged as fixed) — every desk on this team has independently caught it; the trader's own Robinhood-verified quote ($45.05, per state.md) is the only figure used below.

### Sensitivity table — fair value per share (unchanged)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

### DCF vs. market price
Base case ($56.35) implies **~25.1% upside** from the $45.05 live price — up from ~20.7% on 7/17, the widest margin of safety this desk has recorded since opening coverage on OMCL. All 15 sensitivity cells except the single most conservative corner (11%/2.0% = $38.36) now sit above the current price; even 11%/3.0% ($41.95) clears it.

### Verdict: **MODESTLY UNDERVALUED, but this desk is explicitly not calling the widening gap a buy signal into 7/30**
A cheaper price against an unchanged model mechanically widens the DCF discount — that's arithmetic, not new bullish information. This desk is aligning with GS's and JPM's fresh 7/20 flags: JPM's data-gap closure means the realistic 7/30 one-day move is now framed as roughly **-20% to +15%**, a materially wider and more bearish-skewed tail than this desk's model implicitly assumed when the $56.35 fair value was first built. A DCF discount is a statement about where the stock *should* trade absent a bad print — it says nothing about whether the print itself lands well, and four straight down sessions with no identified company-specific catalyst (idiosyncratic pre-earnings positioning or thin-liquidity noise, per BW/GS's convergent read) is exactly the kind of pre-earnings drift this desk would rather see resolve one way or the other before treating it as an entry signal. **No case to add before 7/30.** Re-evaluate for a possible second tranche only on a fresh catalyst — the print itself, a further pullback that starts to look capitulatory rather than grinding, or a name-specific news item — not simply because the discount to fair value keeps mechanically widening on drift.

### Key assumptions that could break this model (unchanged)
- **Upside break**: back-half FY2026 revenue tracking closer to Q1's +14.9% pace than the guided ~4.2%, with margin expansion continuing at the Q1 rate — plausibly pushes fair value into the $65-85 range.
- **Downside break**: JPM's now-quantified -20%/+15% 7/30 tail is the dominant near-term risk this desk is tracking — a merely in-line print, not even a miss, could read as a disappointment after four straight quarters of blowout beats (three of the last four popped +14-15%; the fourth, Q4 2025, crashed -18.4% on an in-line-revenue/EPS-miss combination). Four straight red sessions into the print, with no identified catalyst, is itself a soft data point worth tracking — if it extends into a fifth or sixth session it starts to look less like noise and more like the market pricing in something this desk's model doesn't yet capture.

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only

No change to the standing "not applicable" treatment. Price ($366.60, 7/20 ~15:36 ET) is roughly flat on the day (-0.11% vs. the prior check), participating modestly in today's broad chip-sector relief bounce before giving back most of the gain into the afternoon. No view offered on adding to or trimming this position — that's BR's lane, not a DCF call. Substitute lens unchanged from prior reports (git history).

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only

No change to the standing "not applicable" treatment. Price ($83.095, 7/20 ~15:36 ET) is down modestly on the day (-0.33% vs. the prior check) — continuing to move with the same semiconductor-supply-chain look-through exposure (TSMC/Samsung/SK Hynix) this desk and BW have both flagged since the position was opened, though today's move is small relative to the sector's own swings. No DCF-based case to add or trim.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-20)
GS's fresh 7/20 report independently arrives at the same OMCL read from the idea-desk side: risk rating raised 6→7 on JPM's newly-quantified -20%/+15% 7/30 tail plus the confirmed third-(now fourth-)straight red session, and an explicit "do not add before 7/30" call that matches this desk's verdict above almost verbatim. Full agreement, no disagreement to flag. On NVDA, GS doesn't re-screen it as an idea this cycle (not in its top 10); nothing in GS's report contradicts this desk's continued hard "no add" call. **Open gap this desk is flagging for the record**: GS's report notes MS has still never built a dedicated DCF for OXY (GS's #2 idea), now six-plus days overdue per GS's own count, with sell-side coverage having just split materially (MS cut its own PT to $68 from $74 on OXY this week; Evercore upgraded to Outperform at $65 from $58). OXY is not a current holding and GS's #1 pick remains OMCL, so it falls outside this cycle's coverage mandate (holdings + current #1 pick) — noting the gap rather than closing it unilaterally, and flagging it for the next cycle in case GS's #1 slot changes or the mandate is broadened.

## Explicit read on trader's current positions (NVDA, VTI, VXUS, OMCL)
**NVDA**: unchanged — DCF does not support adding at $202.99 (~25.8% downside to base case); existing ~$5 notional position isn't worth trading out of on valuation grounds given the "no trade without a fresh catalyst" discipline, and today's move is a broad sector bounce, not a name-specific catalyst.
**VTI**: hold, no valuation view — diversified core-sleeve buy, not a DCF call.
**VXUS**: hold, no valuation view — same treatment as VTI; today's move is look-through semiconductor-supply-chain exposure, not a name-specific development.
**OMCL**: hold, no add. DCF discount has widened to ~25.1% on four straight red sessions with no identified catalyst, but per JPM's/GS's own fresh binary-risk framing this desk agrees the discount is not itself a buy signal 10 days before a print with a realistic -20%/+15% one-day range. Next valuation-relevant checkpoint is the 7/30 earnings print.
